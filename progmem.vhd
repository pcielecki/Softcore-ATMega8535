----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:28:55 01/08/2016 
-- Design Name: 
-- Module Name:    progmem - progmem_a 
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
use ieee.numeric_std.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity progmem is
    Port ( 	rst : in  STD_LOGIC;
				clk : in  STD_LOGIC;
				PC : in  STD_LOGIC_VECTOR (15 downto 0);
				Instruction : inout  STD_LOGIC_VECTOR (15 downto 0);
				progmem_write : in  STD_LOGIC);
end progmem;

architecture progmem_a of progmem is
	type mem is array(0 to 128) of std_logic_vector(15 downto 0) ;
	signal mem_array : mem := (others => (others => '1'));
	
begin
	--mem_array(0) <= "1110101000001010";
	--mem_array(1) <= "1110000000010111";
	--mem_array(2) <= "1110000000110111";
	--mem_array(3) <= "0000111100000001";
	--mem_array(4) <= "1110000000010110";
	--mem_array(5) <= "0111110000011100";

	flash : process(clk, rst) is
	begin
		if(rst = '0') then instruction <= (others => 'Z'); end if;
		
		if(clk'event and clk = '1') then
			if(progmem_write = '0' ) then
				Instruction <= mem_array(	to_integer( unsigned(PC) ) );
			else
				Instruction <= (others => 'Z');
				mem_array(	to_integer(	unsigned(PC))	) <= Instruction ;
			end if;
			
		end if;
	end process flash;
end progmem_a;

