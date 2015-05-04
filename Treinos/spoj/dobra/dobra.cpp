
#include <bits/stdc++.h>

using namespace std;

int main (){

  int x, t = 1;

  cin >> x;

  while (x != -1){
    int i = 2, n =0;
    for ( i = 2, n = 0; n < x; n++, i = i+i-1);
    cout << "Teste " << t << endl << i*i << endl << endl;
    cin >> x;
    t++;
  }
  return 0;
}
