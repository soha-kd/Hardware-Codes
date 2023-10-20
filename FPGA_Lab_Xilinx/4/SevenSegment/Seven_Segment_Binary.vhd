
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Seven_Segment_Binary is
Port (
        CLK    : in  STD_LOGIC;                
        Number : in  STD_LOGIC_VECTOR(3 downto 0);  
        Seg    : out STD_LOGIC_VECTOR(6 downto 0)  
    );
	 
end Seven_Segment_Binary;

architecture Behavioral of Seven_Segment_Binary is

 signal Seg_Code: STD_LOGIC_VECTOR(6 downto 0);   
	begin
    
    process (Number)
	 
    begin
        case Number is
            when "0000" =>
                Seg_Code <= "0000001"; -- 0
            when "0001" =>
                Seg_Code <= "1001111"; -- 1
            when "0010" =>
                Seg_Code <= "0010010"; -- 2
            when "0011" =>
                Seg_Code <= "0000110"; -- 3
            when "0100" =>
                Seg_Code <= "1001100"; -- 4
            when "0101" =>
                Seg_Code <= "0100100"; -- 5
            when "0110" =>
                Seg_Code <= "0100000"; -- 6
            when "0111" =>
                Seg_Code <= "0001111"; -- 7
            when "1000" =>
                Seg_Code <= "0000000"; -- 8
            when "1001" =>
                Seg_Code <= "0000100"; -- 9
            when others =>
                Seg_Code <= "1111111"; 
        end case;
		  
    end process;
	 
    process (CLK)
	 
    begin
        if rising_edge(CLK) then
            Seg <= Seg_Code;
        end if;
		  
    end process;


end Behavioral;

