Create sequence
============= 
create sequence  snoss start with 1 increment by 1 maxvalue 10;

Table creation
================
 create table st1 (sno number(5),name varchar(25),age number(3),dept varchar(10),phone number(10));
 insert into st1 values(snoss.nextval,'Rathinam',19,'IT',9942596867);
 insert into st1 values(snoss.nextval,'Ramkumar',20,'IT',9715670289);
 insert into st1 values(snoss.nextval,'Ramasamy',19,'IT',0123456789);
 insert into st1 values(snoss.nextval,'Sakthi',19,'CS',1234554321);
 select * from st1;

 