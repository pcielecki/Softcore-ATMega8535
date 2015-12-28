--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:32:13 12/27/2015
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/vlsi/vlsi_mcu/gp_regs_tb.vhd
-- Project Name:  vlsi_mcu
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Universal_registers
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
 
ENTITY gp_regs_tb IS
END gp_regs_tb;
 
ARCHITECTURE behavior OF gp_regs_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Universal_registers
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         Write_Enable : IN  std_logic;
         Add1 : IN  std_logic_vector(15 downto 0);
         Add2 : IN  std_logic_vector(15 downto 0);
         Address_bus : INOUT  std_logic_vector(15 downto 0);
         Data_bus : INOUT  std_logic_vector(7 downto 0);
         Data1 : OUT  std_logic_vector(7 downto 0);
         Data2 : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal Write_Enable : std_logic := '0';
   signal Add1 : std_logic_vector(15 downto 0) := (others => '0');
   signal Add2 : std_logic_vector(15 downto 0) := (others => '0');

	--BiDirs
   signal Address_bus : std_logic_vector(15 downto 0);
   signal Data_bus : std_logic_vector(7 downto 0);

 	--Outputs
   signal Data1 : std_logic_vector(7 downto 0);
   signal Data2 : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Universal_registers PORT MAP (
          rst => rst,
          clk => clk,
          Write_Enable => Write_Enable,
          Add1 => Add1,
          Add2 => Add2,
          Address_bus => Address_bus,
          Data_bus => Data_bus,
          Data1 => Data1,
          Data2 => Data2
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
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
