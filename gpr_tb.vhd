--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:55:00 12/27/2015
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/vlsi/vlsi_mcu/gpr_tb.vhd
-- Project Name:  vlsi_mcu
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: gp_registerss
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
 
ENTITY gpr_tb IS
END gpr_tb;
 
ARCHITECTURE behavior OF gpr_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT gp_registerss
    PORT(
         Addr1 : IN  std_logic_vector(4 downto 0);
         Addr2 : IN  std_logic_vector(4 downto 0);
         Data1 : OUT  std_logic_vector(7 downto 0);
         Data2 : OUT  std_logic_vector(7 downto 0);
         clk : IN  std_logic;
         rst : IN  std_logic;
         Data_bus : INOUT  std_logic_vector(7 downto 0);
         Address_bus : INOUT  std_logic_vector(15 downto 0);
         Write_Enable : IN  std_logic;
         Not_Enable : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Addr1 : std_logic_vector(4 downto 0) := (others => '0');
   signal Addr2 : std_logic_vector(4 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal Write_Enable : std_logic := '0';
   signal Not_Enable : std_logic := '0';

	--BiDirs
   signal Data_bus : std_logic_vector(7 downto 0);
   signal Address_bus : std_logic_vector(15 downto 0);

 	--Outputs
   signal Data1 : std_logic_vector(7 downto 0);
   signal Data2 : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: gp_registerss PORT MAP (
          Addr1 => Addr1,
          Addr2 => Addr2,
          Data1 => Data1,
          Data2 => Data2,
          clk => clk,
          rst => rst,
          Data_bus => Data_bus,
          Address_bus => Address_bus,
          Write_Enable => Write_Enable,
          Not_Enable => Not_Enable
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
	Write_Enable <= '1';
	Address_bus <= (others => '0');
	Address_bus(1) <= '1';
	Data_bus <= "01010101";
	wait for 1.2*clk_period;
	
	rst <= '1';
	Addr1 <= "01010";
	Addr2 <= "10101";
	wait for 1.5*clk_period;
	
	Address_bus(2) <= '1';
	Data_bus <= "11001100";
	wait for 1.5*clk_period;
	
	Addr1(1) <= '1';
	Addr2(2 downto 1) <= "11";
	Write_Enable <= '0';
	Data_bus <= (others => 'Z');
	wait for 1.5*clk_period;
	
	assert FALSE severity FAILURE;
   end process;

END;
