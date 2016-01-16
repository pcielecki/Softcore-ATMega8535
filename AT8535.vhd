----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:04:43 01/12/2016 
-- Design Name: 
-- Module Name:    AT8535 - at_A 
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

entity AT8535 is
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           port_A : inout  STD_LOGIC_VECTOR (7 downto 0);
			  progmem_write : in std_logic;
			  instruction_write : in std_logic_vector(15 downto 0)
			  );
end AT8535;

architecture at_A of AT8535 is

	component CPU is
		 Port ( CPU_rst : in  STD_LOGIC;
				  CPU_clk : in  STD_LOGIC;
				  PC_out : out std_logic_vector(15 downto 0);
				  instruction : in  STD_LOGIC_VECTOR(15 downto 0);
				  CPU_Data_bus : inout  STD_LOGIC_VECTOR (7 downto 0);
				  CPU_Address_bus : inout  STD_LOGIC_VECTOR (15 downto 0);
				  CPU_Write_Enable : inout std_logic);
	end component CPU;
	
	component progmem is
    Port ( 	rst : in  STD_LOGIC;
				clk : in  STD_LOGIC;
				PC : in  STD_LOGIC_VECTOR (15 downto 0);
				Instruction : inout  STD_LOGIC_VECTOR (15 downto 0);
				progmem_write : in  STD_LOGIC);
	end component progmem;

	
	signal s_instruction, s_PC, s_PC_R , s_PC_W: std_logic_vector(15 downto 0) := (others => '0');
	signal Data_bus : std_logic_vector(7 downto 0);
	signal Address_bus : std_logic_vector(15 downto 0);
	signal Write_Enable : std_logic;
	
begin
	
	flash_programming : process(clk, rst) 
	begin
		if(clk'event and clk = '1' ) then
			if(progmem_write = '1') then
				--s_instruction <= instruction_write;
			
				s_PC_W <= s_PC_W + "0000000000000001";
			else s_PC_W <= (others => '0'); --s_instruction <= (others => 'Z');
			end if;
		end if;
	end process flash_programming;
	
	with progmem_write select
		s_instruction <= instruction_write when '1',
								(others => 'Z') when others;
	
	with progmem_write select
		s_PC <= s_PC_W when '1',
				 s_PC_R when others;
				
	AVR_Core : CPU port map(CPU_rst => rst,
									CPU_clk => clk,
									PC_out  => s_PC_R,
									instruction => s_instruction,
									CPU_data_bus => Data_bus,
									CPU_address_bus => Address_bus,
									CPU_Write_Enable => Write_Enable
									);
									
	flash : progmem port map(rst => rst, clk => clk, PC => s_PC, Instruction => s_instruction, progmem_write => progmem_write);


end at_A;

