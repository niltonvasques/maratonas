#include <bits/stdc++.h>

#define N 10

using namespace std;

int main(){

  char letters[11] = "ABCDEFGHIJ";
  int n = N;

  do{
    printf("%s\n",letters);
  }while(next_permutation(letters, letters+n));

  return 0;
}
