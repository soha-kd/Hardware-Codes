LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
    COMPONENT Detector
    PORT(
         i_in, clk, rst : IN  bit;
         out_put1 : OUT  bit;
         out_put2 : OUT  bit
        );
    END COMPONENT;
    

   --Inputs
   signal i_in : bit := '0';
   signal clk : bit := '0';
   signal rst : bit := '0';

 	--Outputs
   signal out_put1 : bit;
   signal out_put2 :bit;

   -- Clock period definitions
   constant clk_period : time := 10 us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Detector PORT MAP (
          i_in => i_in,
          clk => clk,
          rst => rst,
          out_put1 => out_put1,
          out_put2 => out_put2
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
     i_in <= '0';  rst <= '1'; wait for 10 us;
	  rst <= '0'; wait for 10 us;
	  i_in <= '0'; wait for 10 us;
	  i_in <= '1'; wait for 10 us;
	  i_in <= '0'; wait for 10 us;
	  i_in <= '1'; wait for 10 us;
	  i_in <= '0'; wait for 10 us;
	  i_in <= '0'; wait for 10 us;
	  i_in <= '1'; wait for 10 us;
	  i_in <= '1'; wait;
   end process;

END;
