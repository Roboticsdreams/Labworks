create table eb(cid number(3),name varchar(10),address varchar(10),curread number(10),preread n
umber(10),cdate date,wofine date,wfine date);



insert into eb values(&cid,'&name','&address',&curread,&preread,'&cdate','&wofinedate','&wfinedate');
insert into eb values(101,'rathinam','sathy',1000,500,'13mar09','20mar09','30mar09')


 declare
 cno number(3);
 cname varchar(10);
 pread number(10);
 cread number(10);
 netread number(10);
 amt number(10,2);
 id number(10);
add varchar(10);
cudate date;
wof date;
wif date;
 begin
 id:=&id;
 select cid,name,address,curread,preread,cdate,wofine,wfine  into cno,cname,add,cread,pread,cudate,wof,wif  from eb where cid=id;
dbms_output.put_line('----------------------------------------------------------------------------');
 dbms_output.put_line('TamilNadu Electricity Board');
dbms_output.put_line('-----------------------------------------------------------------------------');
if(pread>cread)then
dbms_output.put_line('invalid input');
else 
 netread:=cread-pread;
 if(netread>=200)and(netread<300)then
 amt:=netread*3;
 else if(netread<200)then
 amt:=netread*1.5;
 else if(netread>=300)then
 amt:=netread*4.5;
end if;
 end if;
 end if;
 end if;
 dbms_output.put_line('cid:'||cno||'                Name:'||cname);
 dbms_output.put_line('----------------------------------------------------------------------------------');
dbms_output.put_line('previoud reading:'||pread);
dbms_output.put_line('Current reading:'||cread);
dbms_output.put_line('Total reading:'||netread);
dbms_output.put_line('-----------------------------------------------------------------------------------');
dbms_output.put_line('Amount:'||amt);
dbms_output.put_line('------------------------------------------------------------------------------------');
dbms_output.put_line('Note: without fine date:'||wof||'          withfine date:'||wif);
dbms_output.put_line('-------------------------------------------------------------------------------------');
exception
when no_data_found then
dbms_output.put_line('No data found');
 end;