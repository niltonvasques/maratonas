#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  string w;
  int k;
  scanf("%d", &k);
  while(k--){
    cin >> w;
    if( w.length() == 5)
      printf("3\n");
    else if ((w[0] == 'o' && w[1] == 'n') || (w[0] == 'o' && w[2] == 'e') || (w[1] == 'n' && w[2] == 'e'))
      printf("1\n");
    else
      printf("2\n");
  }

}
