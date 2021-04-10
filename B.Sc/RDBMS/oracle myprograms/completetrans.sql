create table deposit(cid number(5),dno number(5),amount number(10),ddate date);
insert into depoist values(&cid,&dno,&amount,'&ddate');
insert into deposit values(1,143,5000,'25-apr-09');
insert into deposit values(2,138,4000,'30-jan-08');

create table withdraw(cid number(3),wno number(3),amount number(10),ddate date);

insert into withdraw values(&cid,&wno,&amount,'&wdate');
insert into withdraw values(1,143,200,'26-apr-09');
insert into withdraw values(2,138,200,'26-apr-09');


 declare
 cursor s(id number) is select * from deposit where cid=id;
 cursor s1(id number) is select * from withdraw where cid=id;
 cn number(10);
 d constant number(3):=500;
 drec deposit% rowtype;
 wrec deposit% rowtype;
 a number(5);
 b number(5);
 res number(5);
 begin
 cn:=&cn;
 open s(cn);
 open s1(cn);
 select amount into a from deposit where cid=cn;
 select amount into b from withdraw where cid=cn;
 dbms_output.put_line('Deposit information of customer'||cn);
 dbms_output.put_line('dnumber depamount ddate');
 loop
 fetch s into drec;
 exit when s % notfound;
 dbms_output.put_line(drec.dno||' '||drec.amount||' '||drec.ddate);
 end loop;
 dbms_output.put_line('Withdraw Information of customer'||cn);
 dbms_output.put_line('wnumber wamount wdate');
  loop
 fetch s1 into wrec;
 exit when s1 % notfound;
 dbms_output.put_line(wrec.wno||' '||wrec.amount||' '||wrec.ddate);
 end loop;
 close s;
 close s1;
 res:=(a-(d+b));
 dbms_output.put_line('current balance of customer'||cn);
 dbms_output.put_line('depamount wamount wbalance cbalance');
 dbms_output.put_line(a||' '||b||' '||d||'  '||res);
 end;




