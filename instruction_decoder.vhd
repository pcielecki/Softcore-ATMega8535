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
			  Address_bus : out std_logic_vector(15 downto 0);
			  Data_bus : out std_logic_vector(7 downto 0);
			  Write_Enable : out std_logic);
end instruction_decoder;

architecture Idec_a of instruction_decoder is
type STATE is (IDLE, 
					ALU_INSTR_C1_IM, ALU_INSTR_C2, ALU_INSTR_C3, 
					MEM_INSTR_C1,
					COMMMON_C1, COMMON_C2);
	signal idec_state : states := IDLE;
begin
	idec_transitions: process(clk, rst) is
	begin
		if(rst = '0') then idec_state <= IDLE;
		elsif(clk'event and clk = '1') then
			if(idec_state = IDLE) then
				if(instr_coded(15) = '0') then 	idec_state <= ALU_INSTR_C1;
				else										idec_state <= MEM_INSTR_C1;
				end if;
			else
			case idec_state is
				when ALU_INSTR_C1 => 				idec_state <= ALU_INSTR_C2;
				when ALU_INSTR_C2 => 				idec_state <= ALU_INSTR_C3;
				when ALU_INSTR_C3 => 				idec_state <= COMMON_C1;	
				when MEM_INSTR_C1 => 				idec_state <= COMMON_C1;
				when COMMON_C1		=>					idec_state <= COMMON_C2;
				when COMMON_C2		=>					idec_state <= IDLE;
			end case;
			end if;
		end if;
	end process idec_transitions;

	idec_outs : process(clk,rst) is
	begin
		if(clk'event and clk = '1') then
			case idec_state is
					when ALU_INSTR_C1 => 						reg1 <= instr_coded(8 downto 4);				
																		reg2 <= instr_coded(9) & instr_coded(3 downto 0);		
																		
					
			end case;
		end if;
	end process idec_outs;

end Idec_a;

