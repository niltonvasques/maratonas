#include <cstdio>

using namespace std;

int N;
char X[110];


int main(){

  scanf("%d\n", &N);
  while(N--) {
    scanf("0.%[0-9]...\n", X); 

    printf("the digits are 0.%s\n", X);
  }

  return 0;
}
