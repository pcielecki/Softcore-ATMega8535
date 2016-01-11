----------------------------------------------------------------------------------
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
			  op_add : out std_logic;
			  op_sub : out std_logic;
			  op_and : out std_logic;
			  op_or : out std_logic;
			  immediate:out std_logic_vector(7 downto 0);		
			  relative_PC: out std_logic_vector(15 downto 0);
			  Address_bus : out std_logic_vector(15 downto 0);
			  Data_bus : out std_logic_vector(7 downto 0);
			  Write_Enable : out std_logic);
end instruction_decoder;

architecture Idec_a of instruction_decoder is

	type STATE is (IDLE, FETCH, MEM_ACCESS, EX_ALU, MEM_WRITEBACK);
	signal idec_state : STATE := IDLE;
	
	signal Add_for_Addbus_p1 	: std_logic_vector(15 downto 0);
	signal Data_for_Dbus_p1  	: std_logic_vector(7 downto 0);
	signal DBbus_immediate_p1	: std_logic;
	signal register_1_p1			: std_logic_vector(4  downto 0);
	signal register_2_p1			: std_logic_vector(4 downto 0);
	signal use_immediate_p1		: std_logic;
	signal imm_for_alu_p1		: std_logic_vector(7 downto 0);
	signal ALU_AND, ALU_OR, ALU_ADD, ALU_SUB	: std_logic;
	signal last_instr_p1		 	: std_logic_vector(15 downto 0) ;
	signal write_PC_p1			: std_logic;
	signal conditional_branch 	: std_logic;
	
begin

	idec_auto: process(clk, rst) is
	begin
		if(rst = '0') then idec_state <= IDLE;
		elsif(clk'event and clk = '1') then
			case idec_state is
				when IDLE			=>		if(instr_coded = "0000000000000000" or instr_coded = last_instr_p1) 	
													then 	idec_state <= IDLE;
												else
													idec_state <= FETCH;
												end if;
				when FETCH  		=> 	idec_state <= MEM_ACCESS;
				when MEM_ACCESS  	=> 	idec_state <= EX_ALU;
				when EX_ALU 		=> 	idec_state <= MEM_WRITEBACK;
				when others 		=>		idec_state <= IDLE;
			end case;
		end if;
	end process idec_auto;
	
	--INSTRUCTION FETCH
	register_1_p1 <= 	instr_coded(8 downto 4) 										when idec_state = FETCH and instr_coded(14) = '0' else
					'1' & instr_coded(7 downto 4)								when idec_state = FETCH; 
		
	register_2_p1 <= instr_coded(9) & instr_coded(3 downto 0)					when idec_state = FETCH; 		
		
	Add_for_Addbus_p1 <= "000000000001" & instr_coded(7 downto 4)			when idec_state = FETCH and instr_coded(13) = '1' else 
								"00000000000"  & instr_coded(8 downto 4)			when idec_state = FETCH; 
	
	DBbus_immediate_p1 <= 	'0'													when idec_state = FETCH and instr_coded(15) = '0' else
									'1'													when idec_state = FETCH;
	
	use_immediate_p1 <= 	'1'													when idec_state = FETCH and instr_coded(14) = '1' else
								'0' 													when idec_state = FETCH;	
								
	conditional_branch <= '1'													when idec_state = FETCH and instr_coded(15 downto 12) = "1111" else
								 '0'													when idec_state = FETCH;
								 
	
	
	imm_for_alu_p1 <= instr_coded(11 downto 8) & instr_coded(3 downto 0)when idec_state = FETCH;
			
	Data_for_Dbus_p1 <= instr_coded(11 downto 8) & instr_coded(3 downto 0) when idec_state = FETCH and instr_coded(15) = '1'; 

									
	Write_PC_p1 				<= '1'										when idec_state = FETCH and instr_coded(15 downto 14) = "10" else
									'0'										when idec_state = FETCH;
								
	last_instr_p1 <= instr_coded													when idec_state = FETCH;
	
	ALU_AND <= '1' when idec_state = FETCH and (instr_coded(13 downto 10) = "1000" or instr_coded(13 downto 12) = "11") else '0' when idec_state = FETCH;
	ALU_OR  <= '1' when idec_state = FETCH and instr_coded(13 downto 12) = "10"  	else '0' when idec_state = FETCH;
	ALU_ADD <= '1' when idec_state = FETCH and instr_coded(13 downto 10) = "0011" 	else '0' when idec_state = FETCH;
	ALU_SUB <= '1' when idec_state = FETCH and instr_coded(13 downto 12) = "01"	else '0' when idec_state = FETCH;
	
		
	--MEMORY_ACCESS
	reg1 <= register_1_p1	when idec_state = MEM_ACCESS;
	reg2 <= register_2_p1	when idec_state = MEM_ACCESS;
	Immediate <= imm_for_alu_p1					when idec_state = EX_ALU;
	Immediate_Not_reg <= use_immediate_p1 	when idec_state = EX_ALU;
	
	--ALU_EXECUTION
	op_and <= ALU_and when idec_state = EX_ALU and DBbus_immediate_p1 = '0';
	op_or <= ALU_or when idec_state = EX_ALU and DBbus_immediate_p1 = '0';
	op_add <= ALU_add when idec_state = EX_ALU and DBbus_immediate_p1 = '0';
	op_sub <= ALU_sub when idec_state = EX_ALU and DBbus_immediate_p1 = '0';	
	ALU_Not_mem <= not DBbus_immediate_p1 when idec_state = EX_ALU	 else '0';
	
	--MEM_WRITEBACK
	Address_bus <= Add_for_Addbus_p1 when idec_state = MEM_WRITEBACK else (others => 'Z');
	Data_bus 	<= Data_for_dbus_p1 when idec_state = MEM_WRITEBACK and DBbus_immediate_p1 = '1' else (others => 'Z');
	Write_enable <= '1' when idec_state = MEM_WRITEBACK else '0';
	manipulate_PC <= Write_PC_p1 when idec_state = MEM_WRITEBACK;
	
	--IDLE

	
end Idec_a;

