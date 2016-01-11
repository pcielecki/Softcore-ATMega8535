----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:05:22 01/08/2016 
-- Design Name: 
-- Module Name:    Program_counter - PC_a 
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

entity Program_counter is
    Port ( Write_PC : in  STD_LOGIC;
           PC_in : in  STD_LOGIC_VECTOR (15 downto 0);
           increment : in  STD_LOGIC;
           PC_out : out  STD_LOGIC_VECTOR (15 downto 0);
           rst : in  STD_LOGIC;
           clk : in  STD_LOGIC);
end Program_counter;

architecture PC_a of Program_counter is
	signal PC : std_logic_vector(15 downto 0);
begin
	PC: process (clk, rst) is
	begin
		if(rst = '0') then PC_out <= (others => '0');
		elsif(clk'event and clk = '1') then
			if(increment = '1') then PC <= PC + "0000000000000001"; end if;
			if(Write_PC = '1') then PC <= PC_in; end if;
		end if;
	end process PC;

	PC_out <= PC;
end PC_a;

