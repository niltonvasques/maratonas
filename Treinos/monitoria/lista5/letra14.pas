program letra14;

var
  texto : AnsiString;
  total, i, size : integer;
  freq  : double;
  letra : char;
  found : boolean;


begin

  readln(letra);
  readln(texto);

  total := 0;
  freq := 0;

  found := false;

  size := length(texto);
  inc(total);
  for i:= 1 to size do
    begin
      if ( found = false ) and ( texto[i] = letra ) then
        begin
          found := true;
          freq := freq + 1.0; 
        end;
      if (texto[i] = ' ') and (i+1 <= size) then 
      begin
        found := false;
        inc(total);
      end;
    end;

  freq := freq / total;
  freq := freq * 100.0;
  writeln(freq:0:1);
end.
