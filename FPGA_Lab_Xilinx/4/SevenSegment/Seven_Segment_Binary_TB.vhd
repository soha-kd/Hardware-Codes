LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

 
ENTITY Seven_Segment_Binary_TB IS
END Seven_Segment_Binary_TB;
 
ARCHITECTURE behavior OF Seven_Segment_Binary_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Seven_Segment_Binary
    PORT(
         CLK : IN  std_logic;
         Number : IN  std_logic_vector(3 downto 0);
         Seg : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal Number : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal Seg : std_logic_vector(6 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Seven_Segment_Binary PORT MAP (
          CLK => CLK,
          Number => Number,
          Seg => Seg
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		Number <= "0000";
      wait for 10 ns;
		Number <= "0001";
      wait for 10 ns;	
		Number <= "0010";
      wait for 10 ns;
		Number <= "0011";
      wait for 10 ns;	
      wait;
   end process;

END;
