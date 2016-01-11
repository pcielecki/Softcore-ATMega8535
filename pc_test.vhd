--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   00:33:03 01/12/2016
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/vlsi/vlsi_mcu/VLSI_MCU/pc_test.vhd
-- Project Name:  vlsi_mcu
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Program_counter
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
 
ENTITY pc_test IS
END pc_test;
 
ARCHITECTURE behavior OF pc_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Program_counter
    PORT(
         Write_PC : IN  std_logic;
         PC_relative : IN  std_logic_vector(15 downto 0);
         increment : IN  std_logic;
         PC_out : out  std_logic_vector(15 downto 0);
         rst : IN  std_logic;
         clk : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Write_PC : std_logic := '0';
   signal PC_relative : std_logic_vector(15 downto 0) := (others => '0');
   signal increment : std_logic := '0';
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal PC_out : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Program_counter PORT MAP (
          PC_relative => PC_relative,
          increment => increment,
          PC_out => PC_out,
          rst => rst,
          clk => clk
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
		wait for 1*clk_period;
		
		rst <= '1';
		wait for 5 * clk_period;
		
		increment <= '1';
		wait for 1*clk_period;
		
		increment <= '0';
		wait for 1*clk_period;
		
		increment <= '1';
		wait for 2 * clk_period;
		
		PC_relative <= "0000011111000001";
		wait for 2*clk_period;
		
		assert FALSE severity FAILURE;
   end process;

END;
