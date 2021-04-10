Table Creation
=============
create table marklist(roll number(6),name varchar(20),dob date,course varchar(10),m1 number(5),m2 number(5),m3 number(5),m4 num
ber(5),m5 number(5));

Row Insertion
=============
insert into marklist values(101,'bala','1aug91','Bsc',78,89,67,90,99);
insert into marklist values(102,'gopi','1jan92','Bca',78,89,90,76,87);
insert into marklist values(103,'raja','25mar90','DCA',67,78,90,65,74);
insert into marklist values(104,'senu','19sep80','MCA',56,78,45,54,32);

Data Retrival
===========
select * from marklist;


Procedure creation
==============
 declare
 tot number(10);
 av number(5,2);
 i number(6);
 roll number(6);
 n varchar(15);
 cur varchar(10);
 mr1 number(6);
 mr2 number(6);
 mr3 number(6);
 mr4 number(6);
 mr5 number(6);
 res1 varchar(10);
 res2 varchar(10);
 res3 varchar(10);
 res4 varchar(10);
 res5 varchar(10);
 grd varchar(5);
 dob date;
 begin
 i:=&i;
 select name,dob,course,m1,m2,m3,m4,m5 into n,dob,cur,mr1,mr2,mr3,mr4,mr5 from marklist where roll=i;
 tot:=mr1+mr2+mr3+mr4+mr5;
 av:=tot/5;
if((mr1>=40))then
 res1:='PASS';
 else
 res1:='FAIL';
 end if;
if((mr2>=40))then
 res2:='PASS';
 else
 res2:='FAIL';
 end if;
if((mr3>=40))then
 res3:='PASS';
 else
 res3:='FAIL';
 end if;
if((mr4>=40))then
 res4:='PASS';
 else
 res4:='FAIL';
 end if;
if((mr5>=40))then
 res5:='PASS';
 else
 res5:='FAIL';
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
dbms_output.put_line('--------------------------------------------------------------------');
 dbms_output.put_line('Mark list');
 dbms_output.put_line('--------------------------------------------------------------------');
 dbms_output.put_line('Regno:'||i||'  '||'Name:'||n);
 dbms_output.put_line('Course:'||cur||' '||'Date of birth:'||dob);
 dbms_output.put_line('---------------------------------------------------------------------');
 dbms_output.put_line('Subject:'||' Marks'||'  '||'Result');
 dbms_output.put_line('---------------------------------------------------------------------');
 dbms_output.put_line('Tamil:   '||mr1||'    '||res1);
 dbms_output.put_line('English: '||mr2||'    '||res2);
 dbms_output.put_line('Maths:   '||mr3||'    '||res3);
 dbms_output.put_line('Science: '||mr4||'    '||res4);
 dbms_output.put_line('Social:  '||mr5||'    '||res5);
 dbms_output.put_line('---------------------------------------------------------------------');
 dbms_output.put_line('Total:'||tot);
 dbms_output.put_line('Average:'||av);
 dbms_output.put_line('Grade:'||grd);
 dbms_output.put_line('----------------------------------------------------------------------');
 exception
 when no_data_found then
 dbms_output.put_line('no rows are selected');
 end;

