library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Detector is
	port( i_in , clk , rst : in bit; out_put1 , out_put2 : out bit);
end Detector;

architecture Behavioral of Detector is
	type state is (s0 , s1 , s2 , s3 , s4);
	signal pr_s , nx_s : state;

begin
process(rst , clk)
			begin
				if (rst = '1') then
					pr_s <= s0;
				elsif(clk'event and clk ='1') then
					pr_s <= nx_s;
				end if;
		end process;
		 
		 
		process(i_in , pr_s)
			begin
				if(pr_s = s0) then
					out_put1 <= '0' ;
					out_put2 <= '0' ; 
					if(i_in = '1') then 
						nx_s <= s0; 
					else 
						nx_s <= s1; 
					end if;
					
				elsif(pr_s = s1) then
					out_put1 <= '0' ;
					out_put2 <= '0' ; 
					if(i_in = '1') then 
						nx_s <= s2; 
					else 
						nx_s <= s1; 
					end if;
					
				elsif(pr_s = s2) then 
					out_put1 <= '0' ;
					out_put2 <= '0' ;
					if(i_in = '1') then 
						nx_s <= s3; 
					else 
						nx_s <= s4; 
					end if;
					
				elsif(pr_s = s3) then
					out_put1 <= '1' ;
					out_put2 <= '0' ;
					if(i_in = '1') then 
						nx_s <= s0; 
					else 
						nx_s <= s1; 
					end if;
					
				elsif(pr_s=s4) then
					out_put1 <= '0' ;
					out_put2 <= '1' ; 
					if(i_in = '1') then 
						nx_s <= s2; 
					else 
						nx_s <= s1; 
					end if;
					
				end if;	
		 end process;

end Behavioral;

