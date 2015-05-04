#include <stdio.h>

#define min(a,b) ( (a) < (b) ? (a) : (b) )

int main(){

    int n;
    int i;
    scanf("%d", &n);
    int D[61];
    int E[61];
    int t; 
    char p[10];
    for(i = 0; i < 61; i++){
        E[i] = 0;
        D[i] = 0;
    }
    for(i = 0; i < n; i++){
       scanf("%d %s", &t, p);
       if( p[0] == 'D'){
            D[t]++;
       }else{
            E[t]++;
       }
    }


    int pares = 0;
    for(i = 0; i < 61; i++){
        pares += min( D[i], E[i] );
    }

    printf("%d\n", pares);



    return 0;
}
