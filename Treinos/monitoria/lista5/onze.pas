program onze;

var
  num : AnsiString;
  i : integer;
  check : integer;

begin


  readln(num);

  while num <> '0' do
  begin
    check := 0;

    for i := 1 to length(num) do
      begin
        if i mod 2 = 1 then check := check + (integer(num[i]) - integer('0'))
        else check := check - (integer(num[i]) - integer('0'))
      end;

      if (check = 0) or (check mod 11 = 0) then writeln(num, ' is a multiple of 11.')
      else writeln(num, ' is not a multiple of 11.');

      readln(num);
  end;

end.
