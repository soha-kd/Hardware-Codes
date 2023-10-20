library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_unsigned.all;

entity multi is port(
	i1	: in std_logic_vector(11 downto 0);
	i2	: in std_logic_vector(11 downto 0);
	multi_ans	: out std_logic_vector(23 downto 0));
end multi;

architecture Behavioral of multi is

begin
	multi_ans <= i1 * i2;

end Behavioral;
