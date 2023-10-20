library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;


entity az5 is

port (
	 a : in STD_LOGIC_VECTOR (3 downto 0);
    b : in STD_LOGIC_VECTOR (3 downto 0);
	 sel1 : in STD_LOGIC_VECTOR(2 downto 0);
    z : inout STD_LOGIC_VECTOR (3 downto 0);

	 sel2 : in STD_LOGIC;
	 outp : inout STD_LOGIC_VECTOR(3 downto 0);
	 
	 sel3 : in STD_LOGIC;
	 y: out STD_LOGIC_VECTOR(3 downto 0)
	);
end az5;

architecture Behavioral of az5 is

begin

	process(a , b , sel1)
		 begin
			 case sel1 is
				  when "000" => z <= a ;

				  when "001" => z <= b ;

				  when "010" => z <= a+ b;

				  when "011" => z <= a and b;

				  when "100" => z <= a or b ;
				  
				  when "101" => z <= not a;

				  when "110" => z <= not b;

				  when others => z <= "0000";
			 end case;
		 end process;
		 
		 process(a , sel2)
		 begin
			 if (sel2 = '0' ) then
					 outp(0) <= a(0) ; outp(1) <= a(1) ; outp(2) <= a(2) ; outp(3) <= a(3)  ;
			 elsif (sel2 = '1') then 
					 outp(0) <= '0'  ; outp(1) <= a(0) ; outp(2) <= a(1) ; outp(3) <= a(2)  ;
			 else		 
					 outp <= "0000";
			  end if ;
		 end process;


		 process(z , outp , sel3)
		 begin
			 case sel3 is
				when '0' =>
					 y <= z;
				when '1' =>
					 y <= outp;
				when others =>
					 y <= "0000";
				end case;	 
		 end process;
end Behavioral;

