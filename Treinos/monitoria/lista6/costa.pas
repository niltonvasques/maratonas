program costaprg;

var 
n, m, i, j: integer;
mapa : array[1..1001, 1..1001] of byte;
x : char;
costa : longint = 0;

begin

  readln(n, m);

  for i := 1 to m do
    for j := 1 to n do
    begin
      if j = n then readln(x)
      else read(x);
      if x = '.' then mapa[i][j] := 0
      else mapa[i][j] := 1;
    end; 

  for i := 1 to m do
  begin
    for j := 1 to n do
    begin
      if mapa[i][j] = 1 then
      begin
        if (i+1 = n+1) or (i-1 = 0) or (j+1 = n+1) or (j-1 = 0) then inc(costa)
        else if (mapa[i+1][j] = 0) or (mapa[i-1][j] = 0)
        or (mapa[i][j+1] = 0) or (mapa[i][j-1] = 0) then inc(costa);
      end;
    end;
  end;

  writeln(costa);

end.
