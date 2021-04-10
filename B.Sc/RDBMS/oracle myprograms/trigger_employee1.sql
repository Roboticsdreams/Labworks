 create table eployee1(eno number(10),ename varchar(15),salary number(7));
 create trigger eployee1_trig after insert on employee1 for each row when(new.eno<100 or new.salary<1000);
 begin
 raise_application_error(-200002,'This record is invalid');
 end;
insert into employee1 values(&eno,'&ename',&salary);

insert into employee1 values(101,'rathinam',10000);
insert into employee1 values(102,'ram',1000);
insert into employee1 values(99,'ramasamy',999);
insert into employee1 values(103,'raja',1000);
select * from employee1;

