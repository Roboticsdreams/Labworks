
create table eemp(eid number(5),ename varchar(15),basicpay number(10,2))
insert into eemp values(&eid,'&ename',&bsaicpay);
insert into eemp values(1,'bala',1000);
insert into eemp values(2,'gopi',2000);
insert into eemp values(3,'gughan',3000);
insert into eemp values(4,'gowtam',4000);
select * from eemp;


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
 ta:=basic*0.03;
 pf:=basic*0.1;
 ins:=basic*0.05;
 a:=hra+ma+ta;
 d:=pf+ins;
 net:=basic+a-d;
 dbms_output.put_line('    PAY BILL');
 dbms_output.put_line('--------------------------------------');
 dbms_output.put_line('Eid:         '||eno);
 dbms_output.put_line('Ename:       '||ename);
 dbms_output.put_line('--------------------------------------');
 dbms_output.put_line('Allowances:  Deductions');
 dbms_output.put_line('--------------------------------------');
 dbms_output.put_line('Basicpay     '||basic);
 dbms_output.put_line('HRA:         '||hra);
 dbms_output.put_line('PF:          '||pf);
 dbms_output.put_line('Medical:     '||ma);
 dbms_output.put_line('Insurance:   '||ins);
 dbms_output.put_line('Travel:      '||ta);
 dbms_output.put_line('Total:       '||d);
 dbms_output.put_line('--------------------------------------');
 dbms_output.put_line('Netincome:   '||net);
 dbms_output.put_line('--------------------------------------');
exception
when no_data_found then
dbms_output.put_line('Roll is not found in a table');
 end;