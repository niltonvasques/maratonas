#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  int m, n;
  double d, a, dep, value, last;
  int i, current = 0;
  int count = 0;
  bool stop = false;

  while(scanf("%d %lf %lf %d", &m, &d, &a, &n), m > 0){
    value = a + d;
    d = a / m;
    count = 0;
    stop = false;
    current = 0;
    while(n--){
      scanf("%d %lf", &i, &dep);
      if(stop) continue;
      if(i == 0){
        last = dep;
        value = value - (value*dep);
        current = i;
        if(a < value) stop = true; 
      } else {
        for(current++; current < i; current++){
          value = value - (value*last);
          a -= d;
          count++;
          if(a < value) stop = true; 
          if(stop) break;
        }
        if(stop) continue;
        last = dep;
        value = value - (value*dep);
        a -= d;
        current = i;
        count++;
        if(a < value) stop = true; 
      }
    }
    while( a > value ){
      value = value - (value*last);
      a -= d;
      count++;
    }
    if( count != 1) printf("%d months\n",count);
    else printf("%d month\n",count);
  }

}
