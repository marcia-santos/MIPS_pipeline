-----------------------------------------------------------------------
--  MULTIPLICAÇÃO POR SOMAS SUCESSIVAS
--
--  M1, M2       - operadores de N bits
--  start, endop - início e fim de operação de multiplicação
--  produto      - resultado, com 2N bits
-----------------------------------------------------------------------
library IEEE;
use IEEE.Std_Logic_1164.all;
use IEEE.Std_Logic_unsigned.all;

entity multiplica is                  
      generic(N: integer := 32);
      port( multiplicando:          in  std_logic_vector( (N-1) downto 0);
            multiplicador:          in  std_logic_vector( (N-1) downto 0);
            clock,start: in  std_logic; 
            endop :      out std_logic;
            produto :    out std_logic_vector( 2*N-1 downto 0));
end;

architecture rtl of multiplica is   

   type State_type is (inicializa, desloca, calc, termina, fim);
   signal EA: State_type;
   
   signal regP :      std_logic_vector( N*2 downto 0); 
   signal regB :      std_logic_vector( N   downto 0);
   signal cont:       integer;
     
begin      
   
   --
   -- registradores regP, regB, produto, endop e contador de execução
   --
   process(start, clock)
   begin    
     if start='1'then
         regP( N*2 downto N) <= (others=>'0');
         regP( N-1 downto 0) <= multiplicador;         
         regB <= '0'  & multiplicando;
         cont <= 0;
         endop <= '0';
    
     elsif clock'event and clock='1' then     
          
          if EA=calc and regP(0)='1' then
                regP( N*2 downto N) <= regP( N*2 downto N) +  regB; 
                
           elsif EA=desloca then
                regP <= '0' & regP( N*2 downto 1);
                cont <= cont + 1;
                
           elsif EA=termina then
                produto   <= regP( N*2-1 downto 0);
                endop <= '1';
                   
           elsif EA=fim then
                endop <= '0';
         end if;
     end if;       
   end process;
    
    
   -- maquina de estados para controlar a multiplicação
   process (start, clock)
   begin
     if start='1'then
             EA <= inicializa;
     elsif clock'event and clock='0' then  
           case EA is
              when inicializa =>   EA <= calc;   
                        
               when calc       =>  EA <= desloca;                
           
               when desloca    =>  if cont=N then 
                                         EA <= termina; 
                                    else 
                                         EA <= calc;  
                                    end if;             

                when termina   =>   EA <= fim;      -- só serve para gerar o pulso em endop  
                
                when fim       =>   EA <= fim;    

           end case; 
     end if;
   end process;
   
end rtl;   

-----------------------------------------------------------------------
--  DIVISÃO
-----------------------------------------------------------------------
library IEEE;
use IEEE.Std_Logic_1164.all;
use IEEE.Std_Logic_unsigned.all;

entity divide is                  
      generic(N: integer := 16);
      port( dividendo:    in  std_logic_vector( (N-1) downto 0);
            divisor :     in  std_logic_vector( (N-1) downto 0);
            clock,start : in  std_logic; 
            endop :       out std_logic;
            quociente :   out std_logic_vector( N-1 downto 0);
            resto :       out std_logic_vector( N-1 downto 0));
end;

architecture rtl of divide is   
   type State_type is (inicializa, desloca, calc, termina, fim);
   signal EA: State_type;
    
   signal regP :      std_logic_vector( N*2 downto 0); 
   signal regB :      std_logic_vector( N   downto 0);
   signal diferenca : std_logic_vector( N   downto 0);
   signal cont:       integer;
  
begin      
   
   diferenca <=  regP( N*2 downto N) -  regB( N downto 0);   

   process(start, clock)
   begin    
     if start='1'then
         regP( N*2 downto N) <= (others=>'0');
         regP( N-1 downto 0) <= dividendo;
         regB  <= '0' & divisor;
         cont  <= 0;
         endop <= '0';
      
     elsif clock'event and clock='1' then 
     
            if EA=desloca then
                regP  <= regP( N*2-1 downto 0) & regP(N*2);
                
            elsif EA=calc then  
            
                if diferenca(N)='1' then  
                      regP(0)<='0';
                else
                      regP(0)<='1';
                      regP( N*2 downto N) <= diferenca;
                end if;
                
                cont <= cont + 1;
                
            elsif EA=termina then
                      resto     <= regP( N*2-1 downto N);
                      quociente <= regP( N-1   downto 0);
                      endop <= '1';
                   
            elsif EA=fim then
                     endop <= '0';
                      
            end if;
         
        end if;       
    end process;
 
   -- maquina de estados para controlar a DIVISAO
   process (start, clock)
      begin
       if start='1'then
                EA <= inicializa;
       elsif clock'event and clock='0' then  
           case EA is
                when inicializa =>  EA <= desloca; 
                
                when desloca    =>  EA <= calc;
                
                when calc       =>  if cont=N then 
                                       EA <= termina; 
                                    else 
                                       EA <= desloca;  
                                    end if;
                                    
                when termina   =>   EA <= fim;      -- só serve para gerar o pulso em endop  
                
                when fim       =>   EA <= fim;    

         end case; 
       end if;
   end process; 
   
end rtl;


-----------------------------------------------------------------------
--  Testbench
-----------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.STD_LOGIC_UNSIGNED.all;

entity mult_div_tb is
end mult_div_tb;

architecture a1 of mult_div_tb is

   signal clock : std_logic := '0';
   signal start : std_logic;
  
   signal valor1 :  std_logic_vector(15 downto 0);
   signal valor2 :  std_logic_vector(15 downto 0);     

   signal endmul : std_logic; 
   signal produto,multi_expected : std_logic_vector(31 downto 0);
  
   
   signal enddiv : std_logic; 
   signal div, resto : std_logic_vector(15 downto 0);     
   
   signal div_expected, resto_expected : integer;
      
  type rom is array (0 to 9) of std_logic_vector(15 downto 0);
  
  constant dados1 : rom :=        
         ( x"DB35", x"1C70",  x"FFFF",   x"FAE1", x"01C6",  x"0FFE",  x"CF64", x"03C9",  x"0000", x"91C8" );
  
  constant dados2 : rom :=        
         ( x"182D", x"0031",  x"FFFF",   x"1874",  x"3076",  x"F006",  x"40D6", x"F209",  x"0001", x"9078" ); 

begin

   
   D1: entity work.divide
       generic map(N => 16)
       port    map( dividendo=> valor1, divisor => valor2,
                   clock => clock,  start => start, endop=>enddiv, quociente=>div, resto=>resto);

   M1: entity work.multiplica     
       generic map(N => 16)
       port    map( multiplicando=> valor1, multiplicador=> valor2,  
           clock => clock,  start => start, endop=>endmul, produto=>produto);
           
   -- VALOR ESPERADOS DOS RESULTADOS
   multi_expected <= valor1*valor2;  
   div_expected <=  CONV_INTEGER(valor1) / CONV_INTEGER(valor2)   when valor2 > 0 else 0;
   resto_expected <=  CONV_INTEGER(valor1) mod CONV_INTEGER(valor2) when valor2 > 0 else 0;
                 
   process(endmul)      
      begin
        if endmul'event and endmul='0' then
              
            if ( multi_expected  /= produto) then
                  report "------------------------------------------------- erro na multiplicação";
            end if;

       end if;
   end process;
 
   process(enddiv)      
      begin
         if enddiv'event and enddiv='0' then      
       
             if ( div_expected  /= div) then
                   report "------------------------------------------------- erro na divisão";  
             end if;
             if ( resto_expected  /= resto) then
                   report "------------------------------------------------- erro na divisão";
             end if;
         end if;
   end process;

 
   --- gera o clock 
   clock <=  not clock after 5ns;

   process
     variable i: integer := 0;
   begin
      start <= '0';
      wait for 5ns;
      valor1 <= dados1(i);
      valor2 <= dados2(i);
      start <= '1';
      i := i + 1;
      if i=10 then i:=0; end if;
      wait for 13ns;  -- irregular
      start <= '0';
      wait for 400 ns;
    end process;   
      
          
end a1;