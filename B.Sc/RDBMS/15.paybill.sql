Table Creation
=============
create table eemp(eid number(5),ename varchar(15),basicpay number(10,2));

Row Insertion
============
insert into eemp values(&eid,'&ename',&bsaicpay);
insert into eemp values(1,'bala',1000);
insert into eemp values(2,'gopi',2000);
insert into eemp values(3,'gughan',3000);
insert into eemp values(4,'gowtam',4000);

Data Retrival
===========
select * from eemp;

Procedure Creation
================
 declare
 eno number(5);
 ename varchar(10);
 basic number(10,2);
 hra number(10,2);
 ma number(10,2);
 ta number(10,2);
 pf number(10,2);
 ins number(10,2);
 a number(10,2);
 d number(10,2);
 id number(10,2);
 net number(10,2);
 begin
 id:=&id;
 select eid,ename,basicpay into eno,ename,basic from eemp where eid=id;
 hra:=basic*0.12;
 ma:=basic*0.08;
 ta:=basic*0.08;
 pf:=basic*0.1;
 ins:=basic*0.05;
 a:=hra+ma+ta+basic;
 d:=pf+ins;
 net:=a-d;
 dbms_output.put_line('-------------------------------------------');
 dbms_output.put_line('paybill for the employee for month of march');
 dbms_output.put_line('-------------------------------------------');
 dbms_output.put_line('Eid:'||eno||'                Ename:'||ename);
 dbms_output.put_line('-------------------------------------------');
 dbms_output.put_line('Claims               Deductions');
 dbms_output.put_line('-------------------------------------------');
 dbms_output.put_line('Basicpay:    '||basic||'    '||'PF       :'||pf);
 dbms_output.put_line('HRA:         '||hra||'     '||'Insurance:'||ins);
 dbms_output.put_line('MA:          '||ma);
 dbms_output.put_line('Da:          '||ta);
 dbms_output.put_line('-------------------------------------------');
 dbms_output.put_line('Grosspay:    '||a||'    TotalDeduction:'||d);
 dbms_output.put_line('-------------------------------------------');
 dbms_output.put_line('Netincome:   '||net);
 dbms_output.put_line('-------------------------------------------');
exception
when no_data_found then
dbms_output.put_line('Roll is not found in a table');
 end;
