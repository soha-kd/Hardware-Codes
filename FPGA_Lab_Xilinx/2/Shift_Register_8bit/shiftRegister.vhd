library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity shiftRegister is
 port (
        input_clk : in std_logic;
        input_mode : in std_logic;
        input_load : in std_logic;
        input_shift_left : in std_logic;
        input_shift_right : in std_logic;
        input_rotate_left : in std_logic;
        input_data : in std_logic_vector(7 downto 0);
        output_data : out std_logic_vector(7 downto 0)
    );
end shiftRegister;

architecture Behavioral of shiftRegister is
	 signal reg_data : std_logic_vector(7 downto 0);
begin

process (input_clk)
    begin
        if (input_mode = '1') then -- active mode
            if (rising_edge(input_clk)) then
                if (input_load = '1') then -- parallel load
                    reg_data <= input_data;
                elsif (input_shift_left = '1') then -- 2-bit left shift
                    reg_data <= reg_data(6 downto 0) & '0' ;
                elsif (input_shift_right = '1') then -- 1-bit right shift
                    reg_data <= '0' & reg_data(7 downto 1);
                elsif (input_rotate_left = '1') then -- rotate left by 3 bits
                    reg_data <= reg_data(4 downto 0) & reg_data(7 downto 5);
                end if;
            end if;
        else -- inactive mode
            reg_data <= (others => '0');
        end if;
    end process;
    
    output_data <= reg_data;

end Behavioral;

