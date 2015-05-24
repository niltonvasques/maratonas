#include <bits/stdc++.h>

#define ull   unsigned long long 
#define ll    long long 

using namespace std;

int main(){


  int t, N;
  int arr[3];
  cin >> t;
  while(t--){
    cin >> N;
    double sum = 0;
    while(N--){
      double p = 1;
      cin >> arr[0];
      cin >> arr[1];
      cin >> arr[2];
      p = arr[0] / (double)arr[1];
      p *= arr[2];
      p *= arr[1];
      sum += p;
    }
    cout << (ll)sum << endl;
  }
  return 0;
}
