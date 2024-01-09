----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:51:33 01/03/2024 
-- Design Name: 
-- Module Name:    pwm - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity pwm is
    Port ( number : in  STD_LOGIC_VECTOR (7 downto 0);
           lach : in  STD_LOGIC;
           clk_counter : in  STD_LOGIC;
           start : in  STD_LOGIC;
           out_pwm : out  STD_LOGIC);
end pwm;

architecture Behavioral of pwm is
	signal reg_count : std_logic_vector(7 downto 0) := "00000000";
	signal reg_pwm : std_logic_vector(7 downto 0):= "00000000";
	signal pwm_out :STD_LOGIC;
begin	
	process (lach,clk_counter,start)
		begin
			if (start = '1') then
				if (rising_edge(clk_counter))then
					reg_count <= reg_count + '1';
						  if (reg_count > 193) then
								reg_count <= "00000000";
						  end if;
                    if (reg_count >= reg_pwm) then
                        pwm_out <= '0';
                    else
								pwm_out <= '1';
                    end if;
				end if;
				out_pwm <= pwm_out;
			elsif (start = '0') then
				 reg_count <= "00000000";
           		 pwm_out <= '0';
				 out_pwm <= '0';
				if (rising_edge(lach))then
					reg_pwm <= number;
				end if;
			end if;
		end process;
end Behavioral;

