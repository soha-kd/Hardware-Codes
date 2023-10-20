library ieee;
use ieee.std_logic_1164.all;

entity testbench_multiplier is
end entity;

architecture Behavioral of testbench_multiplier is

  signal a_in     : std_logic_vector(3 downto 0);
  signal b_in     : std_logic_vector(4 downto 0);
  signal p_out    : std_logic_vector(8 downto 0);

begin

  uut : entity work.multiplier
    port map (
      x => a_in,
      y => b_in,
      z => p_out
    );

  stim_proc : process
  begin
    --1
    a_in <= "0000";
    b_in <= "01101";
    wait for 10 ns;
   
    --2
    a_in <= "0010";
    b_in <= "00010";
    wait for 10 ns;

    --3
    a_in <= "1111";
    b_in <= "00001";
    wait for 10 ns;

    --4
    a_in <= "1011";
    b_in <= "01110";
    wait for 10 ns;

    wait;
  end process stim_proc;

end architecture Behavioral;