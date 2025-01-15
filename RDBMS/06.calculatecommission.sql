Table Creation
============
create table em(name varchar(20),id number(4),amt number(5))

Row Insertion
=============
 insert into em values('&name',&id,&amt);
insert into em values('raja',101,5000)
insert into em values('sedhu',102,10000)

Function Creation
===============
create or replace procedure com(amt number)return number is c number;
begin
if(amt<=10000) then
 c:=amt*(7/100);
else
c:=amt*0.5;
end if;
dbms_output.put_line('Commission'||c);
end;

Procedure Creation
================
 declare
 cursor c is select * from em;
 rec em % rowtype;
amt number;
 begin
 dbms_output.put_line('Commission Calculation');
open c;
 loop
fetch c into rec;
exit when c % notfound;
dbms_output.put_line('empno:'||rec.id);
dbms_output.put_line('name:'||rec.name);
dbms_output.put_line('Sales amount:'||rec.amt);
com(rec.amt);
end loop;
close c;
 end;
