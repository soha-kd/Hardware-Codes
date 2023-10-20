
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
     COMPONENT BCD
    PORT(clk : IN  std_logic;
         digit :out  integer range 0 to 9);
    END COMPONENT;
	 
   signal clk : std_logic := '0';
   signal digit : integer range 0 to 9;
   constant clk_period : time := 10 ns;
 
BEGIN
 
   uut: BCD PORT MAP (clk => clk,digit => digit);


   process
    begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;

END;
