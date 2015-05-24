#include <bits/stdc++.h>

#define ull   unsigned long long 
#define ll    long long 

#define max(X,Y) ((X) > (Y) ? (X) : (Y))

using namespace std;

int main(){
  int t, w;
  int shift, y1, y2;

  cin >> t;
  while(t--){
    cin >> w;
    shift = 0;
    bool invalid = false;
    while(w--){
      cin >> y1 >> y2;
      if(!shift) 
        shift = abs(y1-y2);
      else 
        invalid = shift != abs(y1-y2);
    }
    printf("%s\n", invalid ? "no" : "yes");
    if(t) printf("\n");
  }
  return 0;
}
