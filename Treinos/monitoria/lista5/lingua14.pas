program lingua14;

var 
  mensagem : AnsiString; 
  i, next : integer;

begin

  next := 2;

  readln(mensagem);
  for i:= 1 to length(mensagem) do
    begin
      if (i = next) or (mensagem[i] = ' ') then
      begin
        write(mensagem[i]);
        if mensagem[i] = ' ' then next := next + 1
        else next := next + 2;
      end;
    end;
  writeln;

end.
