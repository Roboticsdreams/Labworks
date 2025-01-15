declare
a number(5);
b number(5);
c number(5);
y number(5);
begin
y:='&y';
a:=y mod 4;
b:=y mod 100;
c:=y mod 400;
if ((a=0) and (b<>0) or (c=0))then
dbms_output.put_line('The given year is leap year');
else
dbms_output.put_line('The given year is not a leap year');
end if;
end;
/
