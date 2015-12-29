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
           Q : out  STD_LOGIC_VECTOR (7 downto 0);
			  Write_Enable : out std_logic);
	end component reg_8bit_CE;
	
	
	component reg_1x8 is
	generic(Nbit : integer := 8);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           D : in  STD_LOGIC_VECTOR ((Nbit-1) downto 0);
           Q : out  STD_LOGIC_VECTOR ((Nbit-1) downto 0));
	end component reg_1x8;
	
	component reg_1x1 is
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           D : in  STD_LOGIC;
           Q : out  STD_LOGIC);
	end component reg_1x1;
	
	--signal CPU_rst : std_logic;
	signal prog_clk : std_logic;
	signal Write_Not_read : std_logic;
	--signal CPU_Data_bus : std_logic_vector(7 downto 0);
	--signal CPU_Address_bus : std_logic_vector(15 downto 0);
	--signal CPU_Write_Enable : std_logic;
	signal immediate : std_logic_vector(7 downto 0);
	signal Immediate_not_Reg : std_logic;
	signal mux_imm				 : std_logic;
	signal Enable_ALU : std_logic;
	signal ALU_add : std_logic;
	signal ALU_sub : std_logic;
	signal ALU_and : std_logic;
	signal ALU_or : std_logic;
	signal MAR_in : std_logic_vector(15 downto 0);
	signal MDR_in : std_logic_vector(7 downto 0);
	signal Addr1_async : std_logic_vector(4 downto 0);
	signal Addr2_async : std_logic_vector(4 downto 0);
	signal Data1_async : std_logic_vector(7 downto 0);
	--signal ALU_arg1	 : std_logic_vector(7 downto 0);
	signal Data2_async : std_logic_vector(7 downto 0);
	signal ALU_arg2	 : std_logic_vector(7 downto 0);
	signal ALU_immediate: std_logic_vector(7 downto 0);
	signal Rr_ALU		 : std_logic_vector(7 downto 0);
	signal ALU_result  : std_logic_vector(7 downto 0);
	signal status		 : std_logic_vector(7 downto 0);
	signal idec_enable_alu: std_logic;
	
begin
	AVR_Idec : instruction_decoder port map(rst => CPU_rst, clk => CPU_clk, 
														instr_coded => instruction, 
														ALU_Not_mem => idec_enable_alu,
														Immediate_Not_reg => Immediate_Not_Reg,
														manipulate_PC => open,
														reg1 =>Addr1_async,
														reg2 =>Addr2_async,
														op_add => ALU_add,
														op_sub => ALU_sub,
														op_and => ALU_and,
														op_or => ALU_or,
														immediate => immediate,
														Address_bus => MAR_in,
														Data_bus => MDR_in,
														Write_Enable => Write_Not_read
														);
	CPU_Immediate_sel_buf : reg_1x1 port map(rst => CPU_rst, clk => CPU_clk, D => immediate_not_reg, Q => mux_imm);
	
	WE_buf				: reg_1x1 port map(rst => CPU_rst, clk => CPU_clk,  D => Write_Not_read, Q => CPU_Write_Enable);
		
	CPU_MAR : reg_1x8 generic map(16) port map(rst => CPU_rst, clk => CPU_clk, D => MAR_in, Q => CPU_Address_bus);
	
	CPU_MDR : reg_1x8 generic map(8) port map(rst => CPU_rst, clk => CPU_clk, D => MDR_in, Q => CPU_Data_bus);
														
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
													
	ALUr_imm : reg_1x8 generic map(8) port map(rst => CPU_rst, clk => CPU_clk, D => immediate, Q => ALU_immediate);													
	ALU_mux : mux_2x8 port map(A => Data2_async, B => ALU_immediate, sel => mux_imm, Q => Rr_ALU);
	
	
	--ALUr_arg2 : reg_1x8 generic map(8) port map(rst => CPU_rst, clk => CPU_clk, D => Rr_ALU, Q => ALU_arg2);
	--Enable_ALU_reg : reg_1x1 port map(rst => CPU_rst, clk => CPU_clk, D => Idec_enable_alu, Q => Enable_ALU);
	
	AVR_ALU : ALU port map(					operand1 => Data1_async, 
													operand2 => Rr_ALU,
													result => ALU_result,
													op_and => ALU_and,
													op_or => ALU_or,
													op_add => ALU_add,
													op_sub => ALU_sub,
													status_in => "00000000",
													status_out => status
													);
	
	ALU_acc : reg_8bit_CE port map(rst => CPU_rst, clk => CPU_clk, D => ALU_result, Enable => Idec_enable_alu, Q => CPU_Data_bus, Write_Enable => CPU_Write_Enable);

	prescale: process(CPU_clk, CPU_rst) is
	variable tog: boolean := FALSE;
	begin
		if(CPU_clk'event and CPU_clk = '1') then 
			if(tog = TRUE) then 
				prog_clk <= '1';	tog := FALSE;
			else
				prog_clk <= '0'; tog := TRUE;
			end if;
		end if;
	end process prescale;
end CPU_a;

