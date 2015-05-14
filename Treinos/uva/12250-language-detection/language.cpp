#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  string str, ans;
  int c = 1;

  cin >> str;
  while(str != "#"){

    if(str == "HELLO") ans = "ENGLISH";
    else if(str == "HOLA") ans = "SPANISH";
    else if(str == "HALLO") ans = "GERMAN";
    else if(str == "BONJOUR") ans = "FRENCH";
    else if(str == "CIAO") ans = "ITALIAN";
    else if(str == "ZDRAVSTVUJTE") ans = "RUSSIAN";
    else ans = "UNKNOWN";

    cout << "Case " << c++ << ": " << ans << endl;
    cin >> str;
  }

}
