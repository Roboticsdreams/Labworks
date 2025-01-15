
create table de1(deptno number(4)primary key,dname varchar(10));
 
insert into de1 values(&no,'&name');
 insert into de1 values(1,'cs')
 insert into de1 values(2,'it')
 insert into de1 values(3,'ct')
insert into de1 values(4,'ft')

create table emp11(eno number(10),name varchar(15),salary number(6),age number(8),sex varchar(
3),deptno number(4),foreign key(deptno)references de(deptno));

insert into emp11 values(&no,'&name',&sal,&a,'&sex',&dno);
insert into emp11 values(4,'rtr',344,23,'f',1)

