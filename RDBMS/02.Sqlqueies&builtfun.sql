Table creation
============
 create table s1(empno number(5)primary key,empname varchar(20),basicpay number(12,3),grosspay  number(12,3),netpay number(12,3));

Row insertion
=============
 insert into s1 values(&empno,'&ename',&basicpay,&grosspay,&netpay);
insert into s1 values(1,'aaa',1000,3000,4000);
insert into s1 values(2,'bbb',1000,1000,2000);
insert into s1 values(3,'ccc',1000,2000,3000);
insert into s1 values(4,'ddd',1000,2500,3500);
insert into s1 values(5,'eee',1000,9000,10000);
insert into s1 values(9,'sss',1000,300,1300);
select * from s1;

Table creation
=============
 create table s2(empno number(5),empname varchar(10),address varchar(20),city varchar(20));


Row insertion
============
insert into s2 values(&empno,'&empname','&address','&city');
insert into s2 values (1,'aaa','sathy','ranga');
insert into s2 values(2,'bbb','erode','sathy');
insert into s2 values(3,'ccc','chennai','erode');
insert into s2 values(4,'ddd','tamil','nadu');
insert into s2 values(5,'eee','india','tamil');
insert into s2 values(6,'fff','world','india');
 select * from s2;
Comparision operator
==================
 select * from s1 where netpay<3500;
select * from s1 where netpay<=3500;
select * from s1 where netpay>3000;
select * from s1 where netpay>=4000;
select * from s1 where netpay<>4000;

Logical operator
==============
select * from s1 where netpay>1600 and netpay<4000;
select * from s1 where netpay>4000 or netpay<4000;
select * from s1 where not(netpay=4000);

Set operation
===========
(select empname from s1)union(select empname from s2);
(select empname from s1)union all(select empname from s2);
(select empname from s1)intersect(select empname from s2);
(select empname from s1)minus(select empname from s2);

Sorting operation
==============
select * from s1 order by empname desc;
select * from s2 order by empname asc;

Count operation
==============
select count(*) from s1;
select count(*) from s2 group by city;

Bulit in function
==============
select empno,empname,netpay from s1;
select ceil(144.56) from dual;
select sysdate from dual;
select sqrt(25) from dual;
select min(netpay) from s1;
select round(avg(netpay)) from s1;
select count(*) from s1;
 select count(distinct empname) from s1
select length(empname) from s1;
select sum(netpay) from s1;
