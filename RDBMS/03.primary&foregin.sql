Primary key table
===============
create table de1(deptno number(4)primary key,dname varchar(10));
 insert into de1 values(&no,'&name');
 insert into de1 values(1,'cs')
 insert into de1 values(2,'it')
 insert into de1 values(3,'ct')
 insert into de1 values(4,'ft')

Foregin key table
==============
create table emp11(eno number(10),name varchar(15),salary number(6),age number(8),sex varchar(
3),deptno number(4),foreign key(deptno)references de1(deptno));
insert into emp11 values(&eno,'&ename',&salary,&age,'&sex',&dno);
insert into emp11 values(4,'rani',30000,23,'f',1);
insert into emp11 values(5,'ram',60000,27,'m',5);

view tables
===========
select * from de1;
select * from emp11;