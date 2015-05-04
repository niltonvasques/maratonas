#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int i, j;
    int count = 0;
    int gols;
    for(i = 0; i < n; i++){
        int fez = 1;
        for( j = 0; j < m; j++){
            scanf("%d", &gols);
            if(gols == 0) fez = 0;
        }
        if(fez){
            count++;
        } 
    }

    printf("%d\n",count);
    return 0;
}
