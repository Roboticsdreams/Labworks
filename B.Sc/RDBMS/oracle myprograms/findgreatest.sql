
 declare
 a number(3);
 b number(3);
 begin
 a:=10;
 b:=20;
 if(a>b) then
 dbms_output.put_line('A is greater'||a);
 else
 dbms_output.put_line('B is greater'||b);
 end if;
 end;
 