--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:10:45 01/08/2016
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/vlsi/vlsi_mcu/VLSI_MCU/progmem_test.vhd
-- Project Name:  vlsi_mcu
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: progmem
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
 
ENTITY progmem_test IS
END progmem_test;
 
ARCHITECTURE behavior OF progmem_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT progmem
    PORT(
         PC : IN  std_logic_vector(15 downto 0);
         Instruction : INOUT  std_logic_vector(15 downto 0);
         clk : IN  std_logic;
         rst : IN  std_logic;
         progmem_write : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal PC : std_logic_vector(15 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal progmem_write : std_logic := '0';

	--BiDirs
   signal s_Instruction : std_logic_vector(15 downto 0) := (others => '0');

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: progmem PORT MAP (
          PC => PC,
          Instruction => s_Instruction,
          clk => clk,
          rst => rst,
          progmem_write => progmem_write
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
		progmem_write <= '1';
		PC <= (others => '0');
		s_Instruction <= "1110101000001010"; --LDI R16, 0b10101010
		wait for clk_period; 

		rst <= '1';
		s_Instruction <= "1110000000010111"; --LDI R17, 0b00000111
		PC <= "0000000000000000";
		wait for clk_period;
		
		s_Instruction <= "0000111100000001";	--ADD R16, R17
		PC <= "0000000000000001";		
		wait for clk_period;
		
		s_Instruction <= "1110000000010110"; --LDI R17, 0b00000110
		PC <= "0000000000000010";
		wait for clk_period;
		
		s_Instruction <= "0111110000011100";	--ANDI R17, 0b11001100
		PC <= "0000000000000011";
		wait for 2*clk_period;
		
		
		PC <= "0000000000000000";
		progmem_write <= '0';
		s_instruction <= (others => 'Z');
		wait for clk_period;
		
		PC <= "0000000000000001";
		progmem_write <= '0';
		wait for clk_period;
		
		PC <= "0000000000000011";
		progmem_write <= '0';
		wait for clk_period;
		
			
		assert FALSE severity FAILURE;
   end process;

END;
