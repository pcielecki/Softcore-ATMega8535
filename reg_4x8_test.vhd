--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:59:33 12/26/2015
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/vlsi/vlsi_mcu/reg_4x8_test.vhd
-- Project Name:  vlsi_mcu
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: reg_4x8
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
 
ENTITY reg_4x8_test IS
END reg_4x8_test;
 
ARCHITECTURE behavior OF reg_4x8_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT reg_4x8
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         Addr1 : IN  std_logic_vector(1 downto 0);
         Addr2 : IN  std_logic_vector(1 downto 0);
         Data1 : OUT  std_logic_vector(7 downto 0);
         Data2 : OUT  std_logic_vector(7 downto 0);
         Address_bus : IN  std_logic_vector(1 downto 0);
         Data_bus : INOUT  std_logic_vector(7 downto 0);
         Write_Enable : IN  std_logic;
         Chip_Enable_D1 : IN  std_logic;
         Chip_Enable_D2 : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal Addr1 : std_logic_vector(1 downto 0) := (others => '0');
   signal Addr2 : std_logic_vector(1 downto 0) := (others => '0');
   signal Address_bus : std_logic_vector(1 downto 0) := (others => '0');
   signal Write_Enable : std_logic := '0';
   signal Chip_Enable_D1 : std_logic := '0';
   signal Chip_Enable_D2 : std_logic := '0';

	--BiDirs
   signal Data_bus : std_logic_vector(7 downto 0);

 	--Outputs
   signal Data1 : std_logic_vector(7 downto 0);
   signal Data2 : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: reg_4x8 PORT MAP (
          rst => rst,
          clk => clk,
          Addr1 => Addr1,
          Addr2 => Addr2,
          Data1 => Data1,
          Data2 => Data2,
          Address_bus => Address_bus,
          Data_bus => Data_bus,
          Write_Enable => Write_Enable,
          Chip_Enable_D1 => Chip_Enable_D1,
          Chip_Enable_D2 => Chip_Enable_D2
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
		Chip_Enable_D1 <= '1';
		Address_bus <= "11";
		Data_bus <= "00110011";
		Write_Enable <= '1';
		wait for 1.2*clk_period;
		
		rst <= '1';
		wait for 1.5*clk_period;
		
		Address_bus <= "01";
		Data_bus <= "11001100";
		Wait for 1.5*clk_period;
		
		Write_Enable <= '0';
		
		Addr1 <= "11";
		Addr2 <= "01";
		wait for clk_period;
	
		assert FALSE severity FAILURE;
   end process;

END;
