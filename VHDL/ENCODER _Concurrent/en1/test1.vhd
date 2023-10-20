
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY test1 IS
END test1;
 
ARCHITECTURE behavior OF test1 IS 
 
    COMPONENT en1
    PORT(
         x : IN  std_logic_vector(7 downto 0);
         y : OUT  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
 
   signal x : std_logic_vector(7 downto 0) := (others => '0');
   signal y : std_logic_vector(2 downto 0);
 
BEGIN

   uut: en1 PORT MAP (
          x => x,
          y => y
        );
      x <= "00000001" after 0 us , "00010000" after 100 us;   

END;
