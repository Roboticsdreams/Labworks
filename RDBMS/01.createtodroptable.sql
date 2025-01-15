Table creation
============
 create table employee(empno number(5)not null,empname varchar(10)not null,deptno number(2),basic number(5));

Row insertion
============
 insert into employee values(101,'XXX',1,5000);
 insert into employee(empno,empname) values(105,'yyy');
insert into employee values(110,'zzz',null,10000);
 insert into employee values(111,'aaa',null,1000);

Data Retrival
============
 select * from employee;

Alter table
=========
alter table employee add address varchar(20);
select * from employee;
alter table employee drop cloumn deptno;
select * from employee;

Updating table
============
update employee set address='sathy';
 select * from employee;
update employee set basic=15000 where empno=101
 select * from employee;
update employee set deptno=1 where empno=111;
select * from employee;
update employee set basic=15000;
select * from employee;

Delete rows
=========
delete from employee where empno=110;
select * from employee;

Table description
=============
desc employee;

Drop table
=========
drop table employee;
