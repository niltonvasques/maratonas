#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../util/fila.h"

int main(){  
    int i;
    int N, pessoa;
    scanf("%d", &N ); 
    init();
    for(i = 0; i < N; i++){
        scanf("%d", &pessoa); 
        insert(pessoa);
    }
    scanf("%d", &N ); 
    for(i = 0; i < N; i++){
        scanf("%d", &pessoa); 
        remove_value(fila.first, pessoa);
    }
    print_fila();
    clear(fila.first);
    return 0;
}
