#include <bits/stdc++.h>

#define ull   unsigned long long 
#define ll    long long 

#define max(X,Y) ((X) > (Y) ? (X) : (Y))
#define min(X,Y) ((X) < (Y) ? (X) : (Y))

using namespace std;

int main(){
  int t, w, h;
  int low, high;
  int pos = 0;
  int c = 1;
  cin >> t; 
  while(t--){
    low = high = 0;
    pos = -1;
    cin >> w;
    while(w--){
      cin >> h;
      if(pos < 0) 
        pos = h;
      else{
        if(pos < h) high++;
        else if(pos > h ) low++;
        pos = h;
      }
    }
    printf("Case %d: %d %d\n", c++, high, low);
  }
  return 0;
}
