
  declare
 a number(3);
 b number(3);
 c number(3);
 begin
 a:=&a;
 b:=&b;
 c:=&c;
 if((a>b) and(a>c)) then
 dbms_output.put_line('A is greater'||a);
 else if(b>c) then
 dbms_output.put_line('B is greater'||b);
 else
 dbms_output.put_line('C is greater'||c);
 end if;
 end if;
 end;