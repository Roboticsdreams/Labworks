Factorial function
===============
 create or replace function fact1(n number)return number is num number;
 begin
 if(n<=1) then num:=1;
 else num:=n*fact1(n-1);
 end if;
 return(num);
 end;

Procedure Creation
================
 declare
 a number(5);
 c number(5);
 begin
 a:=&a;
 c:=fact1(a);
 dbms_output.put_line('The Factorial of'||'  '||a||'  '||'is'||'  '||c);
 end;