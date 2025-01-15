Table creation & insertion
========================
create table eemployee(empno number(3),ename varchar(25),salary number(6));
insert into eemployee values(101,'ramkutti',10000);
insert into eemployee values(102,'ram',1000);
insert into eemployee values(103,'ramkumar',100);
insert into eemployee values(104,'ramukumar',10);
insert into eemployee values(105,'ram',1);

create view
==========
create view empview as select * from eemployee where empno in(101,102);
select * from empview;
