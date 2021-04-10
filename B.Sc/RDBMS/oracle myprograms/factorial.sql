 declare
 a number(5);
 c number(5);
 begin
 a:=&a;
 c:=fact1(a);
 dbms_output.put_line('The Factorial of'||'  '||a||'  '||'is'||'  '||c);
 end;