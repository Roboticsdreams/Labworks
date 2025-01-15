declare
s varchar2(20);
x varchar2(20);
name varchar2(20);
le number;
i number;
begin
name:='&name';
s:='';
le:=length(name);
for i in 0..le-1 loop
x:=substr(name,le-i,1);
s:=concat(s,x);
end loop;
dbms_output.put_line(s);
dbms_output.put_line(x);
dbms_output.put_line(name);
if (name=s)then
dbms_output.put_line(s||' is Palindrome');
else
dbms_output.put_line(s||' is not a palindrome');
end if;
end;
/
