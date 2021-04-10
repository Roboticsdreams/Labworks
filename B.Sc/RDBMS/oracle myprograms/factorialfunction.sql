 create or replace function fact1(n number)return number is num number;
 begin
 if(n<=1) then num:=1;
 else num:=n*fact1(n-1);
 end if;
 return(num);
 end;