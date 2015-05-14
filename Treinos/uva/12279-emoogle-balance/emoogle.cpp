#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  int ans = 0;
  int k, x, c = 1;
  while(scanf("%d", &k), k){
    ans = 0;
    while(k--){
      scanf("%d", &x);
      if( x > 0) ans++; 
      else ans--;
    }
    printf("Case %d: %d\n", c++, ans);
  }

}
