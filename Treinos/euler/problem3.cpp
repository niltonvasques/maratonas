#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10000000

unsigned long primes[MAX];
int last_prime = 0;

int is_prime( unsigned long num );

int main( int argc, char * argv[] ){
    unsigned long num = 12;

    primes[0] = 1;

    if( argc > 0 ){
        if( argc > 1)
            num = strtol( argv[1], NULL, 10 );
    }

    printf( "Computing Largest Prime for: %lu \n", num );

    unsigned long max_attempt = sqrtl( num ); 
    unsigned long largest = 1;
    for( unsigned long i = 2; i < max_attempt; i++ ){
        if( is_prime( i ) ){
            largest = i;
            printf( "New largest found: %lu \n", largest );
        }
    }

    unsigned long greater = 1;
    for( unsigned long i = 2; i < max_attempt; i++ ){
        if( num % i == 0 ) {
            if( is_prime( i ) ){
                greater = i;
            }
        }
    }
    printf( "largest: %lu \n", greater );

    return 0;
}

int is_prime( unsigned long num ){

    unsigned long max_attempt = (unsigned long) sqrtl( ( long double ) num );
    for( int i = 1; i <= last_prime && primes[i] <= max_attempt; i++ ){
        if( num % primes[i] == 0 ) {
            return 0; 
        }
    }
    if( last_prime < MAX-1 )
        primes[++last_prime] = num;
    else
        printf( "Array primes out of bounds \n" );
    return 1;
}



