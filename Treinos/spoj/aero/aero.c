#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_A 101
#define MAX_V 10001


int aero_jams[MAX_A];
int max, n_max = 0;
void detect_aero_jam( int voos, int aero ){
    if( voos > max ){
        max = voos;
        n_max = 0;
        aero_jams[n_max] = aero;
    }else if( voos == max ){
        n_max++;
        aero_jams[n_max] = aero;
    }
}
int main(){  
    int i, t = 1;
    int A, V, X, Y;
    int aeroportos[MAX_A];
    while( scanf("%d %d", &A, &V) != EOF){
        if( !A && !V ) return 0;
        n_max = 0;
        max = 0;
        for(i = 0; i <= A; i++) aeroportos[i] = 0;
        for(i = 0; i < V; i++){
                scanf("%d %d", &X, &Y); 
                aeroportos[X]++;
                aeroportos[Y]++;
        }
        for(i = 0; i <= A; i++) {
            detect_aero_jam( aeroportos[i], i);
        }
        printf("Teste %d\n",t);
        for(i = 0; i <= n_max; i++)
            printf("%d ", aero_jams[i]);
        printf("\n\n");
        t++;
    }
    
    return 0;
}
