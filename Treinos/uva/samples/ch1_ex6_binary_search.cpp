#include <bits/stdc++.h>

#define ll long long

using namespace std;
vector<ll> arr;

int search(ll item){
  ll left = 0, right = arr.size()-1, center;
  center = (left + right) / 2;
  ll c = 0;
  while(left < right){
    if(arr[center] < item){
      left = center+1;
    }else {
      right = center;
    }
    center = (left + right) / 2;
    c++;
  }
  printf("comparissons %lld\n", c);
  if ( arr[center] == item )    return center;
  return -1;
}

int main(){

  ll x, N, item;
  scanf("%lld", &N);
  scanf("%lld", &item);
  item = 100000;
  while(N--){
    scanf("%lld", &x);
    arr.push_back(x);  
  }
  ll ans = search(item);

  if(ans >= 0)
    printf("%lld==%lld->%lld\n", item, arr[ans], ans);
  else
    printf("not found\n");

  return 0;
}
