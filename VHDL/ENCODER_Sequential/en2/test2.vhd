
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY test2 IS
END test2;
 
ARCHITECTURE behavior OF test2 IS 
 
    COMPONENT en2
    PORT(
         d_x : IN  std_logic_vector(7 downto 0);
         d_y : OUT  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    
   signal d_x : std_logic_vector(7 downto 0) := (others => '0');
   signal d_y : std_logic_vector(2 downto 0);
  
 
BEGIN

   uut: en2 PORT MAP (
          d_x => d_x,
          d_y => d_y
        );
		  d_x <= "00000001" after 0 us , "00010000" after 100 us;

END;
