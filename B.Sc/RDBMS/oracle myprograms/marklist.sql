create table marklist (name varchar(10),mark1 number(3),mark2 number(3),total number(5));
insert into marklist values('&name',&m1,&m2,&total);
insert into marklist values('rathinam',90,91,00);
insert into marklist values('ram',90,9,00);
insert into marklist values('raja',66,55,00);
select *from marklist;
update marklist set total=mark1+mark2;
select * from marklist;
