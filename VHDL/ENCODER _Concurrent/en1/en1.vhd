
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity en1 is
	port (x: in std_logic_vector(7 downto 0);
			y: out std_logic_vector(2 downto 0));
end en1;

architecture Behavioral of en1 is

begin
with x select 
		y <= "000" when "00000001",
		 "001" when "00000010",
		 "010" when "00000100",
		 "011" when "00001000",
		 "100" when "00010000",
		 "101" when "00100000",
		 "110" when "01000000",
		 "111" when "10000000",
		 "111" when others;

end Behavioral;

