----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:05:06 01/18/2016 
-- Design Name: 
-- Module Name:    pull_up - pull_up_a 
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

entity pull_up is
    Port ( EN : in  STD_LOGIC;
           Q : out  STD_LOGIC);
end pull_up;

architecture pull_up_a of pull_up is

begin
	Q <= 'H' when EN = '1' else 'Z';

end pull_up_a;

