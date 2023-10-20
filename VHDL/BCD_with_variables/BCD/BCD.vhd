ibrary IEEE;
use IEEE.STD_LOGIC_1164.ALL;

--BCD fsm
entity BCD_fsm is
	port(clk, rst: IN std_logic;
			count : OUT std_logic_vector(3 downto 0));	
end BCD_fsm;

architecture Behavioral of BCD_fsm is
	TYPE state IS(zero, one, two, three, four, five, six, seven, eight, nine);
	signal pr_state, nx_state : state;

	begin
		process(rst, clk)
		begin
		if(rst = '1') then
			pr_state <= zero;
		elsif(clk'event and clk = '1') then
			pr_state <= nx_state;
			end if;
		end process;
		
		process (pr_state)
		begin
			case pr_state is
			when zero => count <= "0000";
			nx_state <= one;
		
			when one => count <= "0001";
			nx_state <= two;
		
			when two => count <= "0010";
			nx_state <= three;
		
			when three => count <= "0011";
			nx_state <= four;
		
			when four => count <= "0100";
			nx_state <= five;
			
			when five => count <= "0101";
			nx_state <= six;
		
			when six => count <= "0110";
			nx_state <= seven;
		
			when seven => count <= "0111";
			nx_state <= eight;
		
			when eight => count <= "1000";
			nx_state <= nine;
		
			when nine => count <= "1001";
			nx_state <= zero;
			end case ;
		end process;

end Behavioral;
--------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

--BCD with variables
entity BCD is
	 Port ( clk : in  STD_LOGIC;
           digit :out  integer range 0 to 9);
end BCD;

architecture Behavioral of BCD is

begin
process
		variable temp : integer range 0 to 10;
		begin
			wait until(clk'event and clk='1');
			temp := temp+1;
			if(temp=10) then temp := 0;
			end if;
			digit <= temp;
	end process;

end Behavioral;
------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

ENTITY test IS
END test;

ARCHITECTURE behavior OF test IS 

    COMPONENT BCD_fsm
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         count : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
   
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal count : std_logic_vector(3 downto 0);
	---------------------------------------------
	  COMPONENT BCD
    PORT(clk : IN  std_logic;
         digit :out  integer range 0 to 9);
    END COMPONENT;
	 
   signal clk : std_logic := '0';
   signal digit : integer range 0 to 9;
	---------------------------------------------
   constant clk_period : time := 10 ns;
 
BEGIN
 
   uut1: BCD_fsm PORT MAP (
          clk => clk,
          rst => rst,
          count => count
        );
	uut2: BCD PORT MAP (clk => clk,digit => digit);
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
	rst <= '0' after 0 ns,'1' after 55 ns;
END;
