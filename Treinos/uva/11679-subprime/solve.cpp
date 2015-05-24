#include <bits/stdc++.h>

#define ull   unsigned long long 
#define ll    long long 

#define max(X,Y) ((X) > (Y) ? (X) : (Y))
#define min(X,Y) ((X) < (Y) ? (X) : (Y))

using namespace std;

int main(){
  int b, n;
  int d, c, v; 
  int r[21];
  while(scanf("%d %d", &b, &n), (b && n)){
    for(int i = 0; i < b; i++) scanf("%d", &r[i]);
    for(int i = 0; i < n; i++){
      scanf("%d %d %d", &d, &c, &v);
      r[d-1] -= v;
      r[c-1] += v;
    }
    bool has = true;
    for(int i = 0; i < b; i++){
      if(r[i] < 0){
        has = false;
        break;
      } 
    }
    printf("%c\n", has ? 'S':'N');
    
  }
  return 0;
}
