#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
  string w, ans;
  int c = 1;

  cin >> w;
  while(w != "*"){
    if(w == "Hajj") ans = "Hajj-e-Akbar";
    else ans = "Hajj-e-Asghar";
    cout << "Case " << c++ << ": " << ans << endl;
    cin >> w;
  }

}
