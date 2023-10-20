library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity multiplier is
  port (
    x : in  std_logic_vector(3 downto 0);
    y : in  std_logic_vector(4 downto 0);
    z : out std_logic_vector(8 downto 0)
  );
end entity;

architecture Behavioral of multiplier is
begin
  process(x, y)
    variable temp : std_logic_vector(8 downto 0) := (others => '0');
  begin
    for i in 0 to 3 loop
      for j in 0 to 4 loop
        if x(i) = '1' and y(j) = '1' then
          temp(i+j) := '1';
        end if;
      end loop;
    end loop;
    z <= temp;
  end process;
end architecture;