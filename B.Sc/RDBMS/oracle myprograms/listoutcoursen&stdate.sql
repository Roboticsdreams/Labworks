create table course( coursecode number(3)primary key, coursename varchar(25));

insert into course values(101,'bscit');
insert into course values(102,'bca')
insert into course values(103,'bsccs')
insert into course values(104,'bscct')
insert into course values(105,'bscphy')
select * from course;

create table batch(batchcode number(3),coursecode number(3),startingdate date,coursefees number
(10,2),expectedincome number(10,2),netincome number(10,2),foreign key (coursecode) references course
secode));

insert into batch values(1,101,'1jan1999',7000,100000,70000);
insert into batch values(2,102,'1jan2000',7000,100000,70000);
insert into batch values(3,103,'1jan2001',7000,25000,10000);
insert into batch values(4,104,'1jan2002',7000,100000,70000);
insert into batch values(5,105,'1jan2003',7000,10000,10000);
 select * from batch;

  declare
  cursor c1 is select r1.coursename,r2.startingdate from course r1,batch r2 where r2.coursecode=r1.coursecode;
  begin
  for z in c1 loop
  dbms_output.put_line(z.coursename||' '||' '||z.startingdate);
  end loop;
  end;


