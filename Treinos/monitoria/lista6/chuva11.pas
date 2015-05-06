program chuva;

var 
  n, i, j, sum : integer;
  mapa : array[1..300, 1..101] of integer;

begin

  readln(n);

  for i:= 1 to 2*n do 
    for j:= 1 to n do read(mapa[i][j]);

  for i:= 1 to n do 
  begin
    for j:= 1 to n do 
    begin
      sum := mapa[i][j] + mapa[n+i][j];
      if j <> 1 then 
        write(' ');
      write(sum);
    end;
    writeln;
  end;
end.

