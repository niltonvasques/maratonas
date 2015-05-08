#include <bits/stdc++.h>

using namespace std;


int solve(int a, int b, int c, int d){

  int degrees = 720;

  int step = a - b;
  if(step < 0) step += 40;
  degrees += step * 9;

  degrees += 360;

  step = c - b;
  if(step < 0) step += 40;
  degrees += step * 9;

  step = c - d;
  if(step < 0) step += 40;
  degrees += step * 9;

  return degrees;
}

int main(){

  int a, b, c, d;

  cin >> a >> b >> c >> d;
  while( a || b || c || d){

    cout << solve(a, b, c, d) << "\n";
    cin >> a >> b >> c >> d;
  }

  return 0;
}
