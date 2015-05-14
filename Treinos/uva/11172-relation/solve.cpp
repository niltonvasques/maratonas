#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  int t;
  ll l1, l2;

  scanf("%d", &t);

  while(t--){

    l1 = l2 = 0;
    scanf("%lld %lld", &l1, &l2);
    if(l1 < l2) printf("<\n");
    else if(l1 > l2) printf(">\n");
    else  printf("=\n");
  }

}
