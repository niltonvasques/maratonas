#include <bits/stdc++.h>

using namespace std;

int main(){
  string s ("line: a70 and z72 will be replaced, aa24 and a872 will not\n");
  regex e ("\\s[a-z]\\d\\d\\s");   // matches words beginning by "sub"

  //using string/c-string (3) version:
  cout << regex_replace (s,e," *** ");

 // // using range/c-string (6) version:
 // string result;
 // regex_replace (back_inserter(result), s.begin(), s.end(), e, "$2");
 // cout << result;

 // // with flags:
 // cout << regex_replace (s,e,"$1 and $2",regex_constants::format_no_copy);
 // cout << endl;
  return 0;
}
