
create table join1(rno number(5)primary key,name varchar(10),course varchar(10));
insert into join1 values(&rno,'&name','&course');
insert into join1 values(1,'bala','it');
insert into join1 values(2,'deena','cs');
insert into join1 values(3,'velu','ct');
insert into join1 values(4,'seeta','bca');
insert into join1 values(5,'denu','it');

create table join2(rno number(6)primary key,name varchar(10),course varchar(15),address varchar
city varchar(10));

create table join3(rno number(6)primary key,name varchar(10),course varchar(15),address varcha
,city varchar(10));


 insert into join2 values(&rno,'&name','&course',' &address','&city');
 insert into join2 values(1,'bala','it','sathy','sathy');
insert into join2 values(2,'deena','cs',' erode','sathy');
insert into join2 values(3,'velu','ct',' gobi','gobi');

  declare
  cursor joincur is select join1.rno,join1.name,join1.course,join2.address,join2.city from join1,join2 where join1.rno=join2.rno;
  trno join1.rno % type;
  tname join1.name % type;
  tcourse join1.course % type;
  taddress join2.address % type;
  tcity join2.city % type;
  begin
  delete from join3;
  open joincur;
  loop
  fetch joincur into trno,tname,tcourse,taddress,tcity;
  if joincur % found then insert into join3 values(trno,tname,tcourse,taddress,tcity);
  end if;
  exit when(joincur % notfound);
  end loop;
  exception when dup_val_on_index then
  dbms_output.put_line('Roll number is a primary key');
  close joincur;
  end;

select * from join3;
