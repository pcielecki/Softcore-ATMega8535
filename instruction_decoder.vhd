----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:06:33 12/27/2015 
-- Design Name: 
-- Module Name:    instruction_decoder - IR_a 
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

entity instruction_decoder is
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
end instruction_decoder;

architecture Idec_a of instruction_decoder is

	component ALU_op_decoder is
    Port ( 
			  rst : in std_logic;
			  clk : in std_logic;
			  coded_in : in  STD_LOGIC_VECTOR (3 downto 0);
           op_add : out  STD_LOGIC;
           op_sub : out  STD_LOGIC;
           op_and : out  STD_LOGIC;
           op_or : out  STD_LOGIC;
			  enable : in std_logic);
	end component ALU_op_decoder;
	
	signal alu_instr : std_logic_vector(3 downto 0);
	signal alu_EN : std_logic;
begin
	--signal s_enable_ALU : std_logic;
	alu_dec : ALU_op_decoder port map(rst => rst, clk => clk, coded_in => alu_instr, op_add => op_add, op_sub => op_sub, op_and => op_and, op_or => op_or, enable => alu_EN);

	Idec : process(clk, rst) is
	begin
		if(rst = '0') then ALU_Not_mem <= '0';
		
		elsif(clk'event and clk = '1') then
			--Data_bus <= (others => 'Z');
			--Address_bus <= (others => 'Z');
			--immediate <= (others => 'Z');
			manipulate_PC <= '0';
			--immediate_not_reg <= '0';
			--Write_Enable <= 'L';
			--ALU_Not_mem <= '0';
			if(instr_coded = "1111111111111111") then Write_Enable <= '0';
			
			elsif(instr_coded(15) = '1') then -- not activate ALU
				alu_EN <= '0';
				if(instr_coded(13) = '1') then --not manipulate PC
					immediate_not_reg <= '1';
					Write_Enable <= '1';
					Address_bus <= "000000000001" & instr_coded(7 downto 4);
					Data_bus <= instr_coded(11 downto 8) & instr_coded(3 downto 0);
				end if;

			else
				alu_EN <= '1';
				Write_Enable <= '1';
				alu_instr <= instr_coded(13 downto 10);
				
				if(instr_coded(14) = '0') then --ALU operation btw. 2 regs	
					reg1 <= instr_coded(8 downto 4);				
					reg2 <= instr_coded(9) & instr_coded(3 downto 0);
					immediate <= (others => 'Z');
					Immediate_Not_reg <= '0';
					Address_bus <= "00000000000" & instr_coded(8 downto 4);

				else -- operation with immediate
					reg1 <= '1' & instr_coded(7 downto 4);
					reg2 <= (others => 'Z');
					immediate <= instr_coded(11 downto 8) & instr_coded(3 downto 0);
					Immediate_Not_reg <= '1';
					Address_bus <= "000000000001" & instr_coded(7 downto 4);
				end if;
			end if;
			ALU_Not_mem <= alu_EN;
		end if;
	end process Idec;

end Idec_a;

