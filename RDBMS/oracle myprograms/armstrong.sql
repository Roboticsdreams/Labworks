declare
a number(5);
b number(5);
c number(5);
d number(5);
e number(5);
i number(5);
begin
dbms_output.put_line('Armstrong number');
for i in 100...999
loop
a:=mod(i,10);
b:=turn(i/10);
c:=mod(b,10);
d:=turn(b/10);
e:=((a**3)+(c**3)+(d**3));
if(e=i) then
dbms_output.put_line(i);
end if;
end loop;
end;
