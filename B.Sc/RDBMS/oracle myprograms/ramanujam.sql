 declare
 x number(6);
 y number(6);
 s number(6);
 i number(6);
 begin
 dbms_output.put_line('Ramanujam number');
 for i in 1000..9999
 loop
 x:=mod(i,100);
 y:=trunc(i/100);
 s:=((x+y)*(x+y));
 if(i=s) then
 dbms_output.put_line(s);
 end if;
 end loop;
 end;