--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:09:53 01/13/2016
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/vlsi/vlsi_mcu/VLSI_MCU/MCU_tb.vhd
-- Project Name:  vlsi_mcu
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: AT8535
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY MCU_tb IS
END MCU_tb;
 
ARCHITECTURE behavior OF MCU_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT AT8535
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         port_A : INOUT  std_logic_vector(7 downto 0);
         progmem_write : IN  std_logic;
         instruction_write : IN  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal progmem_write : std_logic := '0';
   signal instruction : std_logic_vector(15 downto 0) := (others => '0');

	--BiDirs
   signal port_A : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: AT8535 PORT MAP (
          rst => rst,
          clk => clk,
          port_A => port_A,
          progmem_write => progmem_write,
          instruction_write => instruction
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		rst <= '1';	
		instruction <= "1110101000001010"; --LDI R16, 0b10101010
		
		--wait for 1*clk_period;
		wait for 2*clk_period;
		progmem_write <= '1';
		
		rst <= '0';
		wait for 1*clk_period;
		
		
		instruction <= "1110000000010111"; --LDI R17, 0b00000111
		wait for 1*clk_period;
		
		instruction <= "1110000000110111"; --LDI R19, 0b00000111
		wait for 1*clk_period;
		
		instruction <= "0000111100000001";	--ADD R16, R17
		wait for 1*clk_period;
		
		instruction <= "1110000000010110"; --LDI R17, 0b00000110
		wait for 1*clk_period;
		
		instruction <= "0111110000011100";	--ANDI R17, 0b11001100
		wait for 3*clk_period;
		
		rst <= '1';
		progmem_write <= '0';
		
		wait for 20*clk_period;
		assert FALSE severity failure;
   end process;

END;
