
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 

 
ENTITY hw5_test IS
END hw5_test;
 
ARCHITECTURE behavior OF hw5_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT az5
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         sel1 : IN  std_logic_vector(2 downto 0);
         z : INOUT  std_logic_vector(3 downto 0);
         sel2 : IN  std_logic;
         outp : INOUT  std_logic_vector(3 downto 0);
         sel3 : IN  std_logic;
         y : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');
   signal sel1 : std_logic_vector(2 downto 0) := (others => '0');
   signal sel2 : std_logic := '0';
   signal sel3 : std_logic := '0';

	--BiDirs
   signal z : std_logic_vector(3 downto 0);
   signal outp : std_logic_vector(3 downto 0);

 	--Outputs
   signal y : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: az5 PORT MAP (
          a => a,
          b => b,
          sel1 => sel1,
          z => z,
          sel2 => sel2,
          outp => outp,
          sel3 => sel3,
          y => y
        );

   -- Clock process definitions
 

   -- Stimulus process
   stim_proc: process
   begin		
    
		a <= "0001";
		b <= "0010";
		
		sel1 <= "000";
		sel2 <= '0';
		sel3 <= '0';
		
		wait for 10 ns;
		sel1 <= "001";
		sel2 <= '1';
		sel3 <= '0';
		
		wait for 10 ns;
		sel1 <= "010";
		sel2 <= '0';
		sel3 <= '1';
		
		wait for 10 ns;
		sel1 <= "100";
		sel2 <= '1';
		sel3 <= '1';

      wait;
   end process;

END;
