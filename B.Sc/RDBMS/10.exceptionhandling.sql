Table creation
============
create table excep(rno number(3),name varchar(20),course varchar(20),ddate date);

Row Insertion
============
insert into excep values(&rno,'&name','&course','&date');

Data Retrival
===========
select * from excep;


Exception procedure
=================
declare
roll excep.rno% type;
s_name excep.name% type;
s_course excep.course% type;
s_date date;
begin
roll:=&roll;
select name,course,ddate into s_name,s_course,s_date from excep where roll=excep.rno;
dbms_output.put_line('roll:'||roll);
dbms_output.put_line('name:'||s_name);
dbms_output.put_line('course:'||s_course);
dbms_output.put_line('Date of join:'||s_date);
exception
when no_data_found then
dbms_output.put_line('Roll is not found in a table');
when too_many_rows then
dbms_output.put_line('more than one record selected');
when program_error then
dbms_output.put_line('There is error in program');
when others then 
dbms_output.put_line('This program is successfully completed');
end;


