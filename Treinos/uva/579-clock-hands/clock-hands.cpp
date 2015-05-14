#include <bits/stdc++.h>

#define MIN(X,Y) ( (X) < (Y) ? (X) : (Y))

using namespace std;

float solve(int hh, int mm){
  float m = mm / 60.0;
  float h = hh + m;
  m = mm / 5.0;
  float ans1 = MIN(fabs(h - m), fabs(h - (12+m))) * 30.0;
  return MIN(ans1, fabs((12+h) - m) * 30.0);
}
//2109 - 2930 - 25 ou 27 de maio
//2109 - 2260
//agenor araujo neurologista - X
int main(){

  int hh, mm;

  while(scanf("%d:%d", &hh, &mm), ( hh || mm)){
    printf("%.3f\n",solve(hh,mm));
  }

  return 0;
}
