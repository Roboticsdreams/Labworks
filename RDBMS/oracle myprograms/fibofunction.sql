 create or replace function fib(n number) return number is f number;
 begin
 if(n<=0) then f:=0;
 else if(n=1) then f:=1;
 else if(n>1) then f:=fib(n-1)+fib(n-2);
 end if;
 end if;
 end if;
 return(f);
 end;
 


