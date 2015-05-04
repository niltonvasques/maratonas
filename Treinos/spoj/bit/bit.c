#include <stdio.h>
#include <stdlib.h>


int main(){

    int v;
    int t = 1;
    scanf("%d", &v);

    while(v != 0){
        int i = v / 50;
        v = v % 50;
        int j = v / 10;
        v = v % 10;
        int k = v / 5;
        v = v % 5;
        int l = v / 1;
        printf("Teste %d\n", t++);
        printf("%d %d %d %d\n\n", i, j, k, l);
        scanf("%d", &v);
    }
    return 0;
}
