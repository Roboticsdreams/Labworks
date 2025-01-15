
create table mark(roll number(6),name varchar(20),m1 number(5),m2 number(5),m3 number(5),m4 num
ber(5),m5 number(5));
insert into mark1 values(101,'bala',78,89,67,90,99);
insert into mark1 values(102,'gopi',78,89,90,76,87);
insert into mark1 values(103,'raja',67,78,90,65,74);
insert into mark1 values(104,'senu',56,78,45,54,32);
select * from mark1;


 declare
 tot number(10);
 av number(5,2);
 i number(6);
 r number(6);
 n varchar(15);
 mr1 number(6);
 mr2 number(6);
 mr3 number(6);
 mr4 number(6);
 mr5 number(6);
 res varchar(10);
 grd varchar(5);
 dob date;
 begin
 i:=&i;
ob:='&doj';
 select roll,name,m1,m2,m3,m4,m5 into r,n,mr1,mr2,mr3,mr4,mr5 from mark1 where roll=i;
 tot:=mr1+mr2+mr3+mr4+mr5;
 av:=tot/5;
 if((mr1>=40) and (mr2>=40) and (mr3>=40) and (mr4>=40) and (mr5>=40))then
 res:='PASS';
 else
 res:='FAIL';
 end if;
 if(av>=90)then
 grd:='O';
 else if(av>=80)then
 grd:='A';
 else if(av>=70)then
 grd:='B';
 else if(av>=60)then
 grd:='C';
 else
 grd:='D';
 end if;
 end if;
 end if;
 end if;
 dbms_output.put_line('Mark list');
 dbms_output.put_line('--------------------------------------------------------------------');
 dbms_output.put_line('Name:'||n||'  '||'Date of birth:'||dob);
 dbms_output.put_line('---------------------------------------------------------------------')
 dbms_output.put_line('Mark1:'||mr1);
 dbms_output.put_line('Mark2:'||mr2);
 dbms_output.put_line('Mark3:'||mr3);
 dbms_output.put_line('Mark4:'||mr4);
 dbms_output.put_line('Mark5:'||mr5);
 dbms_output.put_line('---------------------------------------------------------------------')
 dbms_output.put_line('Total:'||tot);
 dbms_output.put_line('Average:'||av);
 dbms_output.put_line('Grade:'||grd);
 dbms_output.put_line('Result:'||res);
 dbms_output.put_line('----------------------------------------------------------------------'
 exception
 when no_data_found then
 dbms_output.put_line('no rows are selected');
 end;
