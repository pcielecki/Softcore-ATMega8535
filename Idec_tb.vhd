--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:48:22 12/27/2015
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/vlsi/vlsi_mcu/Idec_tb.vhd
-- Project Name:  vlsi_mcu
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: instruction_decoder
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
 
ENTITY Idec_tb IS
END Idec_tb;
 
ARCHITECTURE behavior OF Idec_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT instruction_decoder
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         instr_coded : IN  std_logic_vector(15 downto 0);
         ALU_Not_mem : OUT  std_logic;
         Immediate_Not_reg : OUT  std_logic;
         manipulate_PC : OUT  std_logic;
         reg1 : OUT  std_logic_vector(4 downto 0);
         reg2 : OUT  std_logic_vector(4 downto 0);
         op_add : OUT  std_logic;
         op_sub : OUT  std_logic;
         op_and : OUT  std_logic;
         op_or : OUT  std_logic;
         immediate : OUT  std_logic_vector(7 downto 0);
         Address_bus : OUT  std_logic_vector(15 downto 0);
         Data_bus : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal instr_coded : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal ALU_Not_mem : std_logic;
   signal Immediate_Not_reg : std_logic;
   signal manipulate_PC : std_logic;
   signal reg1 : std_logic_vector(4 downto 0);
   signal reg2 : std_logic_vector(4 downto 0);
   signal op_add : std_logic;
   signal op_sub : std_logic;
   signal op_and : std_logic;
   signal op_or : std_logic;
   signal immediate : std_logic_vector(7 downto 0);
   signal Write_PC : std_logic;
   signal Address_bus : std_logic_vector(15 downto 0);
   signal Data_bus : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: instruction_decoder PORT MAP (
          rst => rst,
          clk => clk,
          instr_coded => instr_coded,
          ALU_Not_mem => ALU_Not_mem,
          Immediate_Not_reg => Immediate_Not_reg,
          manipulate_PC => manipulate_PC,
          reg1 => reg1,
          reg2 => reg2,
          op_add => op_add,
          op_sub => op_sub,
          op_and => op_and,
          op_or => op_or,
          immediate => immediate,
          Address_bus => Address_bus,
          Data_bus => Data_bus
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
		instr_coded <= "1110101000001010";
		wait for 1.2*clk_period;
		
		rst <= '1';
		wait for 2*clk_period;
		
		instr_coded <= "0010000010110000";
		wait for 2*clk_period;
		
		instr_coded <= "0111110011111100";
		wait for 2*clk_period;


		assert FALSE severity FAILURE;
   end process;

END;
