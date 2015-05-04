#include <stdio.h>
#include <stdlib.h>

#define MAX 4000000 

int main( ){
    int sum = 0;
    int prev = 0, next = 1;
    for( int i = 1; next < MAX; i++ ){
        int num = prev + next;
        if( num < MAX && num % 2 == 0 ) sum += num;
        prev = next, next = num;
    }

    printf( "sum: %d \n", sum );
    
    return 0;
}



