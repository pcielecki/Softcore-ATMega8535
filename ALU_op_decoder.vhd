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
    Port (  coded_in : in  STD_LOGIC_VECTOR (3 downto 0);
           op_add : out  STD_LOGIC;
           op_sub : out  STD_LOGIC;
           op_and : out  STD_LOGIC;
           op_or : out  STD_LOGIC
			  );
end ALU_op_decoder;

architecture ALU_o_d_a of ALU_op_decoder is
begin
	
	op_and <= '1' when(coded_in(3 downto 0) = "1000" or coded_in(3 downto 2) = "11") else '0';
	op_or  <= '1' when coded_in(3 downto 2) = "10"  	else '0';
	op_add <= '1' when coded_in(3 downto 0) = "0011" 	else '0' ;
	op_sub <= '1' when coded_in(3 downto 2) = "01"	else '0' ;
end ALU_o_d_a;

