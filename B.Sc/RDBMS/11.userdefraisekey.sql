 User defined using raise keyword
============================
 declare
 a number(10);
 b number(10);
 ae exception;
 be exception;
 begin
 a:=&a;
 b:=&b;
 if a>b then raise ae;
 else
 raise be;
 end if;
 exception
 when ae then
 dbms_output.put_line('A is greater than B');
 when be then
 dbms_output.put_line('B is greater than A');
 end;