----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:49:26 01/16/2016 
-- Design Name: 
-- Module Name:    io_port - iop_a 
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
use ieee.std_logic_unsigned.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity io_port is
	generic(Base_address : std_logic_vector := "0000000000111001");
    Port ( 	rst : in std_logic;
				clk : in std_logic;
				Address_bus : inout  STD_LOGIC_VECTOR (15 downto 0);
				Data_bus : inout  STD_LOGIC_VECTOR (7 downto 0);
				Write_enable : in std_logic;
				io_pins : inout  STD_LOGIC_VECTOR (7 downto 0));
end io_port;

architecture iop_a of io_port is
	signal PORTX, PINX, DDRX : std_logic_vector(7 downto 0) := (others => '0');
begin
		iop: process(clk, rst) is
		begin
			if(rst = '0') then PORTX <= (others => '0'); PINX <= (others => '0'); DDRX <= (others => '0');
			elsif(clk'event and clk = '1') then
				case Address_bus is
					when (Base_address) =>
						if(Write_enable = '1') then PINX <= Data_bus; 
						else Data_bus <= PINX;	 end if;
					
					when (Base_address + "0000000000000001") =>
						if(Write_Enable = '1') then PORTX <= Data_bus;
						else Data_bus <= PORTX; end if;
						
					when (Base_address + "0000000000000010") =>
						if(Write_Enable = '1') then DDRX <= Data_bus;
						else Data_bus <= DDRX; 	end if;
					when others => Data_bus <= (others => 'Z'); Address_bus <= (others => 'Z');
				end case;
			end if;
		end process iop;	
		
		
		PINX <= io_pins;
		io_pins(2) <= PORTX(2) when DDRX(2) = '1' else 'Z';
end iop_a;

