#include <bits/stdc++.h>

#define ull   unsigned long long 
#define ll    long long 

#define max(X,Y) ((X) > (Y) ? (X) : (Y))

using namespace std;

ull solve(ull n){
  if(n < 10) return n;
  ull sum = 0;
  while(n){
    sum += n % 10;
    n /= 10;
  }
  return solve(sum);
}

int main(){
  ull n;
  while(scanf("%lld", &n), n){
    printf("%lld\n", solve(n));
  }
  return 0;
}
