#include <bits/stdc++.h>

using namespace std;

int main(){

  char read;
  bool found = false;
  while(scanf("%c", &read) != EOF){
    if( read == '"'){
      if( found )
        cout << "''";
      else
        cout << "``";
      found = !found;
    } else
      cout << read;
  }
  return 0;
}
