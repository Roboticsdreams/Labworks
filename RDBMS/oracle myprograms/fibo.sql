 declare
 n number(5);
 a number(5);
 c number(5);
 begin
 a:=&a;
 n:=0;
 if a=0 or a<0 then
 dbms_output.put_line('Fibonacc series cannot be generated for'||' '||n);
 else
 dbms_output.put_line('Fibonacci sereies for'||' '||a||' '||'is');
 while(n<a) loop
 c:=fib(n);
 dbms_output.put_line(c);
 n:=n+1;
 end loop;
 end if;
 end;
