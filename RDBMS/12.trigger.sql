Table Creation
=============
create table e1(eno number(10),ename varchar(15),salary number(7));

Trigger Creation
=============
 create trigger e1_trig after insert on e1 for each row when(new.eno<100 or new.salary<1000)
 begin
 raise_application_error(-20002,'This record is invalid');
 end;

Row Insertion
=============
insert into e1 values(&eno,'&ename',&salary);
insert into e1 values(101,'rathinam',10000);
insert into e1 values(102,'ram',1000);
insert into e1 values(99,'ramasamy',999);
insert into e1 values(103,'raja',1000);

Data Retrival
===========
select * from e1;

