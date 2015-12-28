----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:23:13 12/25/2015 
-- Design Name: 
-- Module Name:    ALU - ALU_a 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
    Port ( operand1 : in  STD_LOGIC_VECTOR (7 downto 0);
           operand2 : in  STD_LOGIC_VECTOR (7 downto 0);
			  result : out std_logic_vector(7 downto 0);
           op_and : in std_logic;
			  op_or : in std_logic;
			  op_add : in std_logic;
			  op_sub : in std_logic;
           status_in : in  STD_LOGIC_VECTOR (7 downto 0);
           status_out : out  STD_LOGIC_VECTOR (7 downto 0)
);
end ALU;

architecture ALU_a of ALU is

begin
		status_out <= (others => '0');
		
		result <= operand1 + operand2 when op_add = '1' else
					 operand1 - operand2 when op_sub = '1' else
					 operand1 and operand2 when op_and = '1' else
					 operand1 or operand2 ;

		
end architecture ALU_a;

