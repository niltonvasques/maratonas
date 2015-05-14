#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
  int x[21] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int k = 20;
  for(ll i = 0; i < (1 << k); i++){
    for(int j = 0; j < k; j++){
      if(i & (1 << j))
        printf("%d,",x[j]);
    }
    printf("\n");
  }
  return 0;
}
//  for(int a = 0; a < k - 5; a++){
//    for(int b = a+1; b < k - 4; b++){
//      for(int c = b+1; c < k - 3; c++){
//        for(int d = c+1; d < k - 2; d++){
//          for(int e = d+1; e < k - 1; e++){
//            for(int f = e+1; f < k ; f++){
//              printf("%d,%d,%d,%d,%d,%d\n",x[a],x[b],x[c],x[d],x[e],x[f]);
//            }
//          }
//        }
//      }
//    }
//  }
