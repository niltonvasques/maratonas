#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

/*
 * $\bullet$
 * positive result     S = 1 or S = 4 or S = 78 
 * $\bullet$
 * negative result     S = S35 
 * $\bullet$
 * experiment failed     S = 9S4 
 * $\bullet$
 * experiment not completed      S = 190S
 */

  string s;

  int k, size;
  scanf("%d", &k);
  while(k--){
    cin >> s;
    size = s.length();
    if(s == "1" || s == "4" || s == "78")
      printf("+\n");
    else if(s[size-2] == '3' && s[size-1] == '5')
      printf("-\n");
    else if(s[0] == '9' && s[size-1] == '4')
      printf("*\n");
    else if(s[0] == '1' && s[1] == '9' && s[2] == '0')
      printf("?\n");
    else
      printf("+\n");
  }

}
