---------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:06:33 12/27/2015 
-- Design Name: 
-- Module Name:    instruction_decoder - IR_a 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity instruction_decoder is
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           instr_coded : in  STD_LOGIC_VECTOR (15 downto 0);
           ALU_Not_mem : out  STD_LOGIC;
			  Immediate_Not_reg : out std_logic;
			  manipulate_PC : out std_logic;
           reg1 : out  STD_LOGIC_VECTOR (4 downto 0);
           reg2 : out  STD_LOGIC_VECTOR (4 downto 0);
			  alu_decoder : out std_logic_vector(3 downto 0);
			  ALU_immediate:out std_logic_vector(7 downto 0);		
			  relative_PC: out std_logic_vector(15 downto 0);
			  Address_bus : out std_logic_vector(15 downto 0);
			  Data_bus : out std_logic_vector(7 downto 0);
			  Write_Enable : out std_logic;
			  get_next_instr : out std_logic);
end instruction_decoder;

architecture Idec_a of instruction_decoder is

	type STATE is (IDLE, ALU_INSTR, DMA, IN_OUT, BRANCH,  MEM_WRITEBACK);
	signal idec_state, last_state  : STATE := IDLE;
	
	signal Add_for_Addbus_p1 	: std_logic_vector(15 downto 0);
	signal Data_for_Dbus_p1  	: std_logic_vector(7 downto 0);
	signal last_instr_p1		 	: std_logic_vector(15 downto 0) ;

begin

	idec_auto: process(clk, rst) is
	begin
		if(rst = '0') then idec_state <= IDLE;
		elsif(clk'event and clk = '1') then
			last_state <= idec_state;
			
			case idec_state is
				when IDLE			=>		if(instr_coded = "1111111111111111" or instr_coded = last_instr_p1) 	
													then 	idec_state <= IDLE;
												elsif(instr_coded(15) = '0') 					
													then 	idec_state <= ALU_INSTR;
												elsif(instr_coded(15 downto 12) = "1111" 	)
													then 	idec_state <= BRANCH;
												else															
													idec_state <= DMA;
												end if;
												
				when MEM_WRITEBACK =>	if(instr_coded = "1111111111111111" or instr_coded = last_instr_p1) 	
													then 	idec_state <= IDLE;
												elsif(instr_coded(15) = '0') 					
													then 	idec_state <= ALU_INSTR;
												elsif(instr_coded(15 downto 12) = "1111" 	)
													then 	idec_state <= BRANCH;
												else															
													idec_state <= DMA;
												end if;
												
				when others  		 => 	idec_state <= MEM_WRITEBACK;

			end case;
		end if;
	end process idec_auto;
	
	--ALU_INSTR--
	reg1 <= 	instr_coded(8 downto 4) 											when idec_state = ALU_INSTR and instr_coded(14) = '0' else
				'1' & instr_coded(7 downto 4)										when idec_state = ALU_INSTR; 	
	
	reg2 <= instr_coded(9) & instr_coded(3 downto 0)						when idec_state = ALU_INSTR; 	
	
	ALU_Immediate <= instr_coded(11 downto 8) & instr_coded(3 downto 0)when idec_state = ALU_INSTR;
	Immediate_not_reg <= instr_coded(14) 		 								when idec_state = ALU_INSTR;
	
	ALU_Not_mem <= not instr_coded(15) 											when idec_state = ALU_INSTR	 else '0';
	
	ALU_decoder <= instr_coded(13 downto 10)									when idec_state = ALU_INSTR;
	
	
	--ALU_INSTR or DMA ora IN_OUT--
	Add_for_Addbus_p1 <= "000000000001" & instr_coded(7 downto 4)		when idec_state = ALU_INSTR and instr_coded(13) = '1' else 
								"00000000000"  & instr_coded(8 downto 4)		when idec_state = ALU_INSTR else
								"000000000001" & instr_coded(7 downto 4)		when idec_state = DMA		 else
								"00000000000"  &  instr_coded(8 downto 4) 	when idec_state = IN_OUT and instr_coded(11) = '1'  else
								"0000000000"   & instr_coded(11 downto 9) & instr_coded(3 downto 0) 
									when idec_state = IN_OUT;
	
	--DMA--
	Data_for_DBus_p1 <= instr_coded(11 downto 8) & instr_coded(3 downto 0) when idec_state = DMA;

	--IN_OUT--
	--Address_bus <= "0000000000" & instr_coded(8 downto 4) 				when idec_state = IN_OUT and instr_coded(11) = '1' else 
	--					"0000000000" & instr_coded(11 downto 9) & instr_coded(3 downto 0) when idec_state = IN_OUT;
		
	--MEM_WRITEBACK--
	Address_bus <= Add_for_Addbus_p1 when idec_state = MEM_WRITEBACK else (others => 'Z');
	Data_bus 	<= Data_for_Dbus_p1 when idec_state = MEM_WRITEBACK  and last_state /= ALU_INSTR else (others => 'Z');
	Write_enable <= '1' when idec_state = MEM_WRITEBACK else '0';
	--manipulate_PC <= Write_PC_p1 when idec_state = MEM_WRITEBACK;
	
	get_next_instr <= '0' when idec_state = MEM_WRITEBACK or idec_state = IDLE else '1';
	
	
end Idec_a;