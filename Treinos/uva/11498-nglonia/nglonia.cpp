#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  int k;
  ll dx, dy;
  ll cx, cy;

  while(scanf("%d", &k), k){
    scanf("%lld %lld", &dx, &dy);
    while(k--){
      scanf("%lld %lld", &cx, &cy);
      if(cx > dx){
        if(cy > dy) printf("NE\n");
        else if(cy < dy) printf("SE\n");
        else printf("divisa\n");
      }else if(cx < dx){
        if(cy > dy) printf("NO\n");
        else if(cy < dy) printf("SO\n");
        else printf("divisa\n");
      }else{
        printf("divisa\n");
      }
    }
  }


}
