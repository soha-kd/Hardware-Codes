
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    COMPONENT RAM
    PORT(
         address : IN  std_logic_vector(1 downto 0);
         data_in : IN  std_logic_vector(7 downto 0);
         WE : IN  std_logic;
         data_out : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
   signal address : std_logic_vector(1 downto 0) := (others => '0');
   signal data_in : std_logic_vector(7 downto 0) := (others => '0');
   signal WE : std_logic := '0';
   signal data_out : std_logic_vector(7 downto 0);
 
BEGIN

   uut: RAM PORT MAP (
          address => address,
          data_in => data_in,
          WE => WE,
          data_out => data_out
        );
	address <= "00" after 0 us,"01" after 100us, "00" after 200us, "01" after 300us;
	data_in <= "10011000" after 0 us , "01000101" after 100 us, "00000000" after 200 us, "00000000" after 300 us;
	WE <= '1' after 0 us , '1' after 100 us, '0' after 200 us, '0' after 300 us;

END;
