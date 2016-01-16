library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity CPU is
    Port ( CPU_rst : in  STD_LOGIC;
           CPU_clk : in  STD_LOGIC;
			  PC_out : out std_logic_vector(15 downto 0);
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
			  alu_decoder : out std_logic_vector(3 downto 0);
			  ALU_immediate:out std_logic_vector(7 downto 0);		
			  relative_PC: out std_logic_vector(15 downto 0);
			  branch_code : out std_logic_vector(4 downto 0);
			  Address_bus : out std_logic_vector(15 downto 0);
			  Data_bus : out std_logic_vector(7 downto 0);
			  Write_Enable : out std_logic;
			  get_next_instr : out std_logic);
	end component instruction_decoder;
	
	component ALU_op_decoder is
    Port ( coded_in : in  STD_LOGIC_VECTOR (3 downto 0);
           op_add : out  STD_LOGIC;
           op_sub : out  STD_LOGIC;
           op_and : out  STD_LOGIC;
           op_or : out  STD_LOGIC
			  );
	end component ALU_op_decoder;
	
	component Program_counter is
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
			  PC_relative : in  STD_LOGIC_VECTOR (15 downto 0);
           increment : in  STD_LOGIC;
           PC_out : out  STD_LOGIC_VECTOR (15 downto 0)
			  );
	end component Program_counter;
	
	component branch_decoder is
    Port ( relative_PC : in  STD_LOGIC_VECTOR (15 downto 0);
           SREG : in  STD_LOGIC_VECTOR (7 downto 0);
           branch_code : in  STD_LOGIC_VECTOR (4 downto 0);
           write_PC : in  STD_LOGIC;
           PC_to_adder : out  STD_LOGIC_VECTOR (15 downto 0));
	end component branch_decoder;
	
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
	

	
	signal prog_clk : std_logic;
	signal write_PC : std_logic;
	signal branch_code : std_logic_vector(4 downto 0);
	signal relative_PC : std_logic_vector(15 downto 0);
	signal PC_to_adder : std_logic_vector(15 downto 0);
	signal immediate : std_logic_vector(7 downto 0);
	signal Immediate_not_Reg : std_logic;
	signal Enable_ALU : std_logic;
	signal ALU_coded_in : std_logic_vector(3 downto 0);
	signal ALU_add : std_logic;
	signal ALU_sub : std_logic;
	signal ALU_and : std_logic;
	signal ALU_or : std_logic;
	signal Addr1_async : std_logic_vector(4 downto 0);
	signal Addr2_async : std_logic_vector(4 downto 0);
	signal Data1_async : std_logic_vector(7 downto 0);
	signal Data2_async : std_logic_vector(7 downto 0);
	signal ALU_arg2	 : std_logic_vector(7 downto 0);
	signal ALU_immediate: std_logic_vector(7 downto 0);
	signal ALU_result  : std_logic_vector(7 downto 0);
	signal status		 : std_logic_vector(7 downto 0);
	signal fetch_next_instr : std_logic;
	signal buffered_instr : std_logic_vector(15 downto 0);
	
begin

	Instr_reg : reg_1x8  generic map(Nbit => 16) port map(rst => CPU_rst, clk=> CPU_clk, D => instruction, Q=> buffered_instr);
	AVR_Idec : instruction_decoder port map(rst => CPU_rst, clk => CPU_clk, 
														instr_coded => buffered_instr, 
														ALU_Not_mem => Enable_ALU,
														Immediate_Not_reg => Immediate_Not_Reg,
														manipulate_PC => write_PC,
														reg1 =>Addr1_async,
														reg2 =>Addr2_async,
														ALU_decoder => ALU_coded_in,
														ALU_immediate => ALU_immediate,
														relative_PC => relative_PC,
														branch_code => branch_code,
														Address_bus => CPU_Address_bus,
														Data_bus => CPU_Data_bus,
														Write_Enable => CPU_Write_Enable,
														get_next_instr => fetch_next_instr
														);

	ALU_dec : ALU_op_decoder port map (coded_in => ALU_coded_in,
													op_add => ALU_add,
													op_sub => ALU_sub,
													op_or => ALU_or,
													op_and => ALU_and
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
																										
	ALU_mux : mux_2x8 port map(
										A => Data2_async, 
										B => ALU_immediate, 
										sel => immediate_not_reg, 
										Q => ALU_arg2
										);

	AVR_ALU : ALU port map(					operand1 => Data1_async, 
													operand2 => ALU_arg2,
													result => ALU_result,
													op_and => ALU_and,
													op_or => ALU_or,
													op_add => ALU_add,
													op_sub => ALU_sub,
													status_in => "00000000",
													status_out => status
													);
	
	ALU_acc : reg_8bit_CE port map(rst => CPU_rst, clk => CPU_clk, D => ALU_result, Enable => Enable_ALU, Q => CPU_Data_bus);

	prog_ctr: Program_counter port map(rst => CPU_rst, clk => CPU_clk, PC_relative => PC_to_adder, increment => fetch_next_instr, PC_out => PC_out); 
	
	AVR_branch_decoder: branch_decoder port map(relative_PC => relative_PC, SREG => "00000010", branch_code => branch_code, write_PC => write_PC, PC_to_adder => PC_to_adder);
	
	
	CPU_Address_bus <= (others => 'H');
	CPU_Data_bus <= (others => 'H');
	CPU_Write_Enable <= 'L';
end CPU_a;

