
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity en2 is
	port (d_x: in std_logic_vector(7 downto 0);
			d_y: out std_logic_vector(2 downto 0));
end en2;

architecture Behavioral of en2 is
begin
	process(d_x)
		begin
			case d_x is
				 when "00000001" => d_y <= "000";
				 when "00000010" => d_y <= "001";
				 when "00000100" => d_y <= "010";
				 when "00001000" => d_y <= "011";
				 when "00010000" => d_y <= "100";
				 when "00100000" => d_y <= "101";
				 when "01000000" => d_y <= "110";
				 when "10000000" => d_y <= "111";
				 when others => d_y <= "111";
			end case;
end process;			


end Behavioral;

