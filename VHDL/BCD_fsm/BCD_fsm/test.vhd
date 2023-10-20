
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

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
   constant clk_period : time := 10 ns;
 
BEGIN
 
   uut: BCD_fsm PORT MAP (
          clk => clk,
          rst => rst,
          count => count
        );
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
	rst <= '0' after 0 ns,'1' after 100 ns;
END;
