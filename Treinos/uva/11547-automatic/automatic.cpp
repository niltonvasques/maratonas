#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  int k;
  double n, ans;

  scanf("%d", &k);
  while(k--){
    ans = 0;
    scanf("%lf", &n);
    ans = (n * 567.0) / 9.0;
    ans += 7492.0;
    ans *= 235.0;
    ans /= 47.0;
    ans -= 498.0; 
    int d = fabs(ans);
    d /= 10;
    d %= 10;
    printf("%d\n", d);
  }


}
