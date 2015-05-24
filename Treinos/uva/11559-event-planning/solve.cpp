#include <bits/stdc++.h>

#define ull   unsigned long long 
#define ll    long long 

#define max(X,Y) ((X) > (Y) ? (X) : (Y))
#define min(X,Y) ((X) < (Y) ? (X) : (Y))

using namespace std;

int main(){
  int n, b, h, w;
  int p, beds;
  while(scanf("%d %d %d %d", &n, &b, &h, &w) != EOF ){
    int cost = 10000000;
    int total_beds = 0;
    for(int i = 0; i < h; i++){
      scanf("%d", &p);
      for(int j = 0; j < w; j++){
        scanf("%d", &beds);
        total_beds = max(total_beds, beds);
      }
      if(total_beds >= n){
        cost = min(cost, n*p);
      }
    }
    if(cost <= b)
      printf("%d\n", cost);
    else
      printf("stay home\n");
  }
  return 0;
}
