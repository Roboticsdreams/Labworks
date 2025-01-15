create table picture(xval number(5,2),yval number(5,2),image varchar(30));
 insert into picture values(1,12,'raja');
  declare
  x number(6,2);
  y number(6,2);
  na varchar(30);
  begin
  select xval,yval,image into x,y,na from picture where x>8;
  update picture set image='circle' where y<20;
  exception
  when too_manyrows then
  dbms_output.put_line("More than one rows are select");
  exception
  when no_data found then
  dbms_output.put_line('update not possible');
  else
  dbms_output.put_line('The Procedure is successfully completed');
  end;
 /