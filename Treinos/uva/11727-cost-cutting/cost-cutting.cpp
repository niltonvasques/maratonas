#include <bits/stdc++.h>

using namespace std;

#define max(X, Y) ( (X) > (Y) ? (X) : (Y))

#define ll long long

int main(){

  int k, c = 1, x;
  vector<int> s;

  scanf("%d", &k);
  while(k--){
    s.clear();
    for(int i = 0; i < 3; i++){
      scanf("%d", &x);
      s.push_back(x);
    }
    sort(s.begin(), s.end());
    printf("Case %d: %d\n", c++, s[1]);
  }


}
