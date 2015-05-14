#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  string cmd;
  int ans = 0;
  int k,x;
  scanf("%d", &k);
    ans = 0;
    while(k--){
      cin >> cmd;
      if(cmd == "report")
        printf("%d\n", ans);
      else{
        cin >> x;
        ans += x;
      }
    }
}
