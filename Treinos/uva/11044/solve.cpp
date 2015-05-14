#include <bits/stdc++.h>

using namespace std;


int main (){


  int TC, a, b;
  int ans = 0;

  scanf("%d", &TC);

  while(TC--){
    scanf("%d %d", &a, &b);
    ans = ceil((a-2) / 3.0) * ceil((b-2) / 3.0);
    printf("%d\n", ans);
  }

  return 0;
}
