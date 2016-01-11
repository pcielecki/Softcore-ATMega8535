----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:12:36 12/27/2015 
-- Design Name: 
-- Module Name:    ALU_op_decoder - ALU_o_d_a 
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

entity ALU_op_decoder is
    Port ( 
			  rst : in std_logic;
			  clk : in std_logic;
			  coded_in : in  STD_LOGIC_VECTOR (3 downto 0);
           op_add : out  STD_LOGIC;
           op_sub : out  STD_LOGIC;
           op_and : out  STD_LOGIC;
           op_or : out  STD_LOGIC
			  );
end ALU_op_decoder;

architecture ALU_o_d_a of ALU_op_decoder is
begin
	
	op_and <= '1' when(instr_coded(13 downto 10) = "1000" or instr_coded(13 downto 12) = "11") else '0' when idec_state = FETCH;
	op_or  <= '1' when instr_coded(13 downto 12) = "10"  	else '0' when idec_state = FETCH;
	op_add <= '1' when instr_coded(13 downto 10) = "0011" 	else '0' when idec_state = FETCH;
	op_sub <= '1' when instr_coded(13 downto 12) = "01"	else '0' when idec_state = FETCH;
end ALU_o_d_a;

