create table em1(eno number(3),name varchar(20),age number(2),sex varchar(4));
insert into em1 values(&eno,'&ename',&age,'&sex');
insert into em1 values(1,'rathinam',19,'male');
insert into em1 values(2,'ram',20,'male');
insert into em1 values(3,'deep',20,'fema');
select* from em1;


declare
tot number(10);
nof number(10);
nom number(10);
begin
select count(sex)into tot from em1;
select count(sex)into  nof from em1 where sex='fema';
select count(sex)into  nom from em1 where sex='male';
dbms_output.put_line('Total no of employee'||tot);
dbms_output.put_line('Total no of female employee'||nof);
dbms_output.put_line('Total no of male employee'||nom);
end;