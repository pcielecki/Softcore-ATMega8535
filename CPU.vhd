----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:36:53 12/27/2015 
-- Design Name: 
-- Module Name:    CPU - CPU_a 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity CPU is
    Port ( CPU_rst : in  STD_LOGIC;
           CPU_clk : in  STD_LOGIC;
           instruction : in  STD_LOGIC_VECTOR(15 downto 0);
           CPU_Data_bus : inout  STD_LOGIC_VECTOR (7 downto 0);
           CPU_Address_bus : inout  STD_LOGIC_VECTOR (15 downto 0);
			  CPU_Write_Enable : inout std_logic);
end CPU;

architecture CPU_a of CPU is

	component ALU is
    Port ( operand1 : in  STD_LOGIC_VECTOR (7 downto 0);
           operand2 : in  STD_LOGIC_VECTOR (7 downto 0);
			  result : out std_logic_vector(7 downto 0);
           op_and : in std_logic;
			  op_or : in std_logic;
			  op_add : in std_logic;
			  op_sub : in std_logic;
           status_in : in  STD_LOGIC_VECTOR (7 downto 0);
           status_out : out  STD_LOGIC_VECTOR (7 downto 0)
	);
	end component ALU;

	
	component gp_registerss is
    Port ( Addr1 : in  STD_LOGIC_VECTOR (4 downto 0);
           Addr2 : in  STD_LOGIC_VECTOR (4 downto 0);
           Data1 : out  STD_LOGIC_VECTOR (7 downto 0);
           Data2 : out  STD_LOGIC_VECTOR (7 downto 0);
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           Data_bus : inout  STD_LOGIC_VECTOR (7 downto 0);
           Address_bus : inout  STD_LOGIC_VECTOR (15 downto 0);
           Write_Enable : in  STD_LOGIC;
           Not_Enable : in  STD_LOGIC);
	end component gp_registerss;
	
	component instruction_decoder is
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           instr_coded : in  STD_LOGIC_VECTOR (15 downto 0);
           ALU_Not_mem : out  STD_LOGIC;
			  Immediate_Not_reg : out std_logic;
			  manipulate_PC : out std_logic;
           reg1 : out  STD_LOGIC_VECTOR (4 downto 0);
           reg2 : out  STD_LOGIC_VECTOR (4 downto 0);
			  op_add : out std_logic;
			  op_sub : out std_logic;
			  op_and : out std_logic;
			  op_or : out std_logic;
			  immediate:out std_logic_vector(7 downto 0);		  
			  Address_bus : out std_logic_vector(15 downto 0);
			  Data_bus : out std_logic_vector(7 downto 0);
			  Write_Enable : out std_logic);
	end component instruction_decoder;
	
	component mux_2x8 is
    Port ( A : in  STD_LOGIC_VECTOR(7 downto 0);
           B : in  STD_LOGIC_VECTOR(7 downto 0);
           Sel : in  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR(7 downto 0));
	end component mux_2x8;
	
	component reg_8bit_CE is
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           D : in  STD_LOGIC_VECTOR (7 downto 0);
           Enable : in  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR (7 downto 0));
	end component reg_8bit_CE;
	
	--signal CPU_rst : std_logic;
	--signal CPU_clk : std_logic;
	signal Read_Not_write : std_logic;
	--signal CPU_Data_bus : std_logic_vector(7 downto 0);
	--signal CPU_Address_bus : std_logic_vector(15 downto 0);
	--signal CPU_Write_Enable : std_logic;
	signal immediate : std_logic_vector(7 downto 0);
	signal Immediate_not_Reg : std_logic;
	signal Enable_ALU : std_logic;
	signal ALU_add : std_logic;
	signal ALU_sub : std_logic;
	signal ALU_and : std_logic;
	signal ALU_or : std_logic;
	signal Addr1_async : std_logic_vector(4 downto 0);
	signal Addr2_async : std_logic_vector(4 downto 0);
	signal Data1_async : std_logic_vector(7 downto 0);
	signal Data2_async : std_logic_vector(7 downto 0);
	signal Rr_ALU		 : std_logic_vector(7 downto 0);
	signal ALU_result  : std_logic_vector(7 downto 0);
	signal status		 : std_logic_vector(7 downto 0);
	
begin
	ALU_mux : mux_2x8 port map(A => Data2_async, B => immediate, sel => Immediate_not_Reg, Q => Rr_ALU);
	
	ALU_acc : reg_8bit_CE port map(rst => CPU_rst, clk => CPU_clk, D => ALU_result, Enable => Enable_ALU, Q => CPU_Data_bus);
	

	
	AVR_Idec : instruction_decoder port map(rst => CPU_rst, clk => CPU_clk, 
														instr_coded => instruction, 
														ALU_Not_mem => Enable_ALU,
														Immediate_Not_reg => Immediate_Not_Reg,
														manipulate_PC => open,
														reg1 =>Addr1_async,
														reg2 =>Addr2_async,
														op_add => ALU_add,
														op_sub => ALU_sub,
														op_and => ALU_and,
														op_or => ALU_or,
														immediate => immediate,
														Address_bus => CPU_Address_bus,
														Data_bus => CPU_Data_bus,
														Write_Enable => CPU_Write_Enable
														);
														
	AVR_gpreg : gp_registerss port map(Addr1 => Addr1_async, 
													Addr2 => Addr2_async, 
													Data1 => Data1_async, 
													Data2 => Data2_async,
													clk => CPU_clk, rst => CPU_rst,
													Data_bus => CPU_Data_bus,
													Address_bus => CPU_Address_bus,
													Write_Enable => CPU_Write_Enable,
													Not_Enable => not Enable_ALU
													);
													
	AVR_ALU : ALU port map(					operand1 => Data1_async, 
													operand2 => Rr_ALU,
													result => ALU_result,
													op_and => ALU_and,
													op_or => ALU_or,
													op_add => ALU_add,
													op_sub => ALU_sub,
													status_in => "00000000",
													status_out => status);
	

end CPU_a;

