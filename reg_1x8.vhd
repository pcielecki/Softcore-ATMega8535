----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:01:26 12/29/2015 
-- Design Name: 
-- Module Name:    reg_1x8 - reg_1x8_a 
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

entity reg_1x8 is
	generic(Nbit : integer := 8);
	
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           D : in  STD_LOGIC_VECTOR ((Nbit-1) downto 0);
           Q : out  STD_LOGIC_VECTOR ((Nbit-1) downto 0));
end reg_1x8;

architecture reg_1x8_a of reg_1x8 is
begin
	regproc : process(clk, rst) is
	begin
		if(rst = '0') then Q <= (others => 'Z');
		elsif(clk'event and clk = '1') then
			Q <= D;
		end if;
	end process regproc;


end reg_1x8_a;

