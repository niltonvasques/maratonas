#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  ios::sync_with_stdio(false);

  int k, x, c = 1;
  bool bad = false;
  scanf("%d", &k) ;
  while(k--){
    bad = false;
    for(int i = 0; i < 3; i++){
      scanf("%d", &x);
      if( x > 20) bad = true;
    }
    if(bad) 
      printf("Case %d: bad\n", c++);
    else
      printf("Case %d: good\n", c++);
    
  }

}
