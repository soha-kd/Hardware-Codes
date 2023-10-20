LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use IEEE.std_logic_unsigned.all;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    COMPONENT multi
    PORT(
         i1 : IN  std_logic_vector(11 downto 0);
         i2 : IN  std_logic_vector(11 downto 0);
         multi_ans : OUT  std_logic_vector(23 downto 0)
        );
    END COMPONENT;
  
   signal i1 : std_logic_vector(11 downto 0) := (others => '0');
   signal i2 : std_logic_vector(11 downto 0) := (others => '0');
   signal multi_ans : std_logic_vector(23 downto 0);
    
BEGIN

   uut: multi PORT MAP (
          i1 => i1,
          i2 => i2,
          multi_ans => multi_ans
        );

	i1 <= "000000000111" after 0 us, "011100000001" after 100us, "001000000101" after 200us ;
	i2 <= "000000000001" after 0 us, "000000111010" after 100us, "010000011001" after 200us ;

END;
