#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  int t, n, x;
  int d;
  vector<int> parks;

  scanf("%d", &t);

  while(t--){
    d = 0;
    parks.clear();
    scanf("%d", &n);
    while(n--){ scanf("%d", &x); parks.push_back(x);}
    sort(parks.begin(), parks.end());
    
    for(int i = 1; i < parks.size(); i++){
      d+= parks[i] - parks[i-1];
    }
    d += parks[parks.size()-1] - parks[0];
    printf("%d\n", d);

  }

}
