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
    Port ( PC : in  STD_LOGIC_VECTOR (15 downto 0);
           Instruction : inout  STD_LOGIC_VECTOR (15 downto 0);
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           progmem_write : in  STD_LOGIC);
end progmem;

architecture progmem_a of progmem is
	type mem is array(0 to 128) of std_logic_vector(15 downto 0);
	signal mem_array : mem;
	
begin
	flash : process(clk, rst) is
	begin
		if(rst = '0') then instruction <= (others => 'Z');
		
		elsif(clk'event and clk = '1') then
			if(progmem_write = '0' ) then
				Instruction <= mem_array(	to_integer( unsigned(PC) ) );
			else
				Instruction <= (others => 'Z');
				mem_array(	to_integer(	unsigned(PC))	) <= Instruction ;
			end if;
			
		end if;
	end process flash;
end progmem_a;

