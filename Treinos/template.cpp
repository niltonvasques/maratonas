#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int read_line_stdin( char **line ){
    size_t size;
    if( getline(line, &size, stdin) == -1 ) return 0;
    return 1;
}


int main ( ){
    char* line = NULL; 
    int n_lines = 0;       

    while( read_line_stdin( &line ) ){
        if( n_lines == 0 ){
            n_lines = strtol( line, NULL, 10 );       
            if( n_lines == 0 ) break;
        }else{
            n_lines--;
        }
    }
    return 0;
}


