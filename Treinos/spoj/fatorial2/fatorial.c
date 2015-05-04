#include <stdio.h>

int main(){

    int N, i;
    unsigned int fat = 1;
    scanf("%d", &N);
    fat = 1;
    for(i = 1; i <= N; i++)
        fat*=i;
    printf("%d\n",fat);

    return 0;
}
