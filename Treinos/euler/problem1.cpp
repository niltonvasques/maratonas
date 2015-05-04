#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int check[ MAX ];



int main( ){
    for( int i = 0; i < MAX; i++ ) check[ i ] = 0;
    int sum = 0;
    for( int i = 1; i < 1000; i++ ){
        int m3 = 3 * i;
        int m5 = 5 * i;
        if( m3 < MAX && check[m3] == 0 ) sum += m3, check[m3] = 1;
        if( m5 < MAX && check[m5] == 0 ) sum += m5, check[m5] = 1;
    }

    printf( "sum: %d \n", sum );
    
    return 0;
}



