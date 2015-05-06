program minhoca;

var
  n, m, i, j : integer;
  prod : array[1..101] of longint;
  linha, max, x: longint;

begin

  readln(n, m);

  max := 0;

  for i:= 1 to n do
    begin
      linha := 0;
      for j:= 1 to m do
        begin
          read(x);
          if i = 1 then prod[j] := 0;
          prod[j] := prod[j] + x;
          linha := linha + x;
          if prod[j] > max then max := prod[j];
        end;
      if linha > max then max := linha;
    end;

  writeln(max);
  
end.

