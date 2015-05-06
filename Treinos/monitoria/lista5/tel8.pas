program tel;

var 
  number : string;
  i : byte;

begin

  readln(number);
  for i:= 1 to length(number) do
    begin
      if ( number[i] = 'A' ) or (number[i] = 'B') or (number[i] = 'C') then number[i] := '2';
      if ( number[i] = 'D' ) or (number[i] = 'E') or (number[i] = 'F') then number[i] := '3';
      if ( number[i] = 'G' ) or (number[i] = 'H') or (number[i] = 'I') then number[i] := '4';
      if ( number[i] = 'J' ) or (number[i] = 'K') or (number[i] = 'L') then number[i] := '5';
      if ( number[i] = 'M' ) or (number[i] = 'N') or (number[i] = 'O') then number[i] := '6';
      if ( number[i] = 'P' ) or (number[i] = 'Q') or (number[i] = 'R') or (number[i] = 'S') then number[i] := '7';
      if ( number[i] = 'T' ) or (number[i] = 'U') or (number[i] = 'V') then number[i] := '8';
      if ( number[i] = 'W' ) or (number[i] = 'X') or (number[i] = 'Y') or (number[i] = 'Z') then number[i] := '9';
    end;
  writeln(number);

end.
