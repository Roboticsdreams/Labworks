create table split (rno number(4),name varchar(10),java number(3),c number(3),se number(3));
insert table split values(&rno,'&name',&java,&c,&se);
create table s1  (rno number(4),name varchar(10),java number(3),c number(3),se number(3),tot number(3),result varchar(20));
create table s2  (rno number(4),name varchar(10),java number(3),c number(3),se number(3),tot number(3),result varchar(20));

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
select * from split;
select * from s1;
select * from s2;

