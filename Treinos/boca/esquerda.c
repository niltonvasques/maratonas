#include <stdio.h>

int main(){

    int n;
    int i;
    scanf("%d", &n);
    char C[n+1];
    scanf("%s", C);
    char POS [5] = "NLSO";
    int index = 0;
    for( i = 0; i < n; i++){
        switch(C[i]){
            case 'D':
                if(index + 1 > 3) index = 0;
                else index ++;
                break;
            case 'E':
                if(index - 1 < 0) index = 3;
                else index --;
                break;
        }
    }

    printf("%c\n", POS[index]);

    return 0;
}
