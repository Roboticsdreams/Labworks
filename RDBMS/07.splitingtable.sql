Table creation & Insertion
=======================
create table split (rno number(4),name varchar(10),java number(3),c number(3),se number(3));
insert into  split values(&rno,'&name',&java,&c,&se);
insert into  split values(1,'rathinam',90,99,80);
insert into split values(2,'rama',34,78,90);
insert into split values(3,'ram',10,20,30);
insert into split values(4,'rdx',50,70,90);

Resultant table
=============
create table s1  (rno number(4),name varchar(10),java number(3),c number(3),se number(3),tot number(3),result varchar(20));
create table s2  (rno number(4),name varchar(10),java number(3),c number(3),se number(3),tot number(3),result varchar(20));

Procedure
==========
 declare
 rec split % rowtype;
 cursor res is select * from split;
 tot number(3);
 result varchar(10);
 begin
 delete s1;
 delete s2;
 open res;
 loop
 fetch res into rec;
 exit when res % notfound;
 tot:=rec.java+rec.c+rec.se;
 if((rec.java>=40) and (rec.c>=40) and (rec.se>=40))then
 result:='PASS';
 else
 result:='FAIL';
 end if;
 if(result='PASS')then
 insert into s1 values(rec.rno,rec.name,rec.java,rec.c,rec.se,tot,result);
 else
 insert into s2 values(rec.rno,rec.name,rec.java,rec.c,rec.se,tot,result);
 end if;
 end loop;
 close res;
 end;

viewing result
=============
select * from split;
select * from s1;
select * from s2;

