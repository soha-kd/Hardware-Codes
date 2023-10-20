
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.NUMERIC_STD.all;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
    COMPONENT ROM
    PORT(
         clock : IN  std_logic;
         address : IN  std_logic_vector(1 downto 0);
         data_out : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
   signal clock : std_logic := '0';
   signal address : std_logic_vector(1 downto 0) := (others => '0');
   signal data_out : std_logic_vector(7 downto 0);
   constant clock_period : time := 10 ns;
 
BEGIN

   uut: ROM PORT MAP (
          clock => clock,
          address => address,
          data_out => data_out
        );
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 
   address <= "00" after 0 ns , "01" after 10 ns , "10" after 20 ns, "11" after 30 ns ;
  
END;
