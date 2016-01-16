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
           op_and, op_or, op_add, op_sub : in std_logic;
			  zero, carry : out std_logic
);
end ALU;

architecture ALU_a of ALU is
	signal op1, op2, res : std_logic_vector(8 downto 0);
begin
		op1 <= operand1(7) & operand1;
		op2 <= operand2(7) & operand2;
				
		res <= op1 + op2 when op_add = '1' else
					 op1 - op2 when op_sub = '1' else
					 op1 and op2 when op_and = '1' else
					 op1 or op2 when op_or = '1' else
					 op1;

		carry <= res(8);
		zero <= '1' when res = "000000000" else '0';

		result <= res(7 downto 0);
end architecture ALU_a;

