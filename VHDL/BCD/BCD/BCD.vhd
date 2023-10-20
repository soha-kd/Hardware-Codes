
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

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

