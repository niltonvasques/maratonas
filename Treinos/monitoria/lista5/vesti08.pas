program vest;

var
  n, i, acertos : byte;
  ans1, ans2 : string;

begin

  acertos := 0;

  readln(n);

  readln(ans1);
  readln(ans2);
  for i:= 1 to n do
   begin
     if ans1[i] = ans2[i] then inc(acertos);
   end; 

   writeln(acertos);

end.

