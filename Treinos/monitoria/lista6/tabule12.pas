program tabule12;

var
  n, i, mov, passos : byte;
  cx, cy : byte;


begin
  cx := 4;
  cy := 3;
  passos := 0;

  readln(n);

  for i:= 1 to n do 
    begin
      read(mov);
      inc(passos);
      { update y}
      if (mov = 1) or (mov = 8) then cy := cy + 2;
      if (mov = 7) or (mov = 2) then cy := cy + 1;
      if (mov = 6) or (mov = 3) then cy := cy - 1;
      if (mov = 5) or (mov = 4) then cy := cy - 2;
      { update x}
      if (mov = 7) or (mov = 6) then cx := cx - 2;
      if (mov = 8) or (mov = 5) then cx := cx - 1;
      if (mov = 1) or (mov = 4) then cx := cx + 1;
      if (mov = 2) or (mov = 3) then cx := cx + 2;

      { buracos (1, 3), (2, 3), (2, 5) e (5, 4). }
      if (cx = 1) and (cy = 3) then break;
      if (cx = 2) and (cy = 3) then break;
      if (cx = 2) and (cy = 5) then break;
      if (cx = 5) and (cy = 4) then break;
    end; 

    writeln(passos);
end.
