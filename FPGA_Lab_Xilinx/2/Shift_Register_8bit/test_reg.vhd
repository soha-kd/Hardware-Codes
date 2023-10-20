LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY test_reg IS
END test_reg;
 
ARCHITECTURE behavior OF test_reg IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT shiftRegister
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
    END COMPONENT;
    

   --Inputs
    signal input_clk : std_logic := '0';
    signal input_mode : std_logic := '0';
    signal input_load : std_logic := '0';
    signal input_shift_left : std_logic := '0';
    signal input_shift_right : std_logic := '0';
    signal input_rotate_left : std_logic := '0';
    signal input_data : std_logic_vector(7 downto 0) := (others => '0');
    

 	--Outputs
   signal output_data : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant input_clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: shiftRegister PORT MAP (
          input_clk => input_clk,
          input_mode => input_mode,
          input_load => input_load,
          input_shift_left => input_shift_left,
          input_shift_right => input_shift_right,
          input_rotate_left => input_rotate_left,
          input_data => input_data,
          output_data => output_data
        );

   -- Clock process definitions
   input_clk_process :process
   begin
		input_clk <= '0';
		wait for input_clk_period/2;
		input_clk <= '1';
		wait for input_clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      input_data <= "10101010";
        input_mode <= '1'; -- active mode
        wait for 20 ns;
        input_load <= '1'; -- parallel load
        wait for 20 ns;
        input_load <= '0';
        input_shift_left <= '1'; -- 2-bit left shift
        wait for 20 ns;
        input_shift_left <= '0';
        input_shift_right <= '1'; -- 1-bit right shift
        wait for 20 ns;
        input_shift_right <= '0';
        input_rotate_left <= '1'; -- rotate left by 3 bits
        wait for 20 ns;
        input_rotate_left <= '0';
        wait;

      wait;
   end process;

END;
