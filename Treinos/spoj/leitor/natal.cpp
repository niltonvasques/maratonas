#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int read_line_stdin( char **line ){
    size_t size;
    if( getline(line, &size, stdin) == -1 ) return 0;
    return 1;
}

//const char* cont[] = {"AMERICA", "EUROPA", "ASIA", "AFRICA", "OCEANIA", "DESCONHECIDO"};
const char* cont[] = {"A", "B", "C", "D", "E", "*"};

int main ( ){
    char* line = NULL; 
    int n_lines = 0;       
    while( read_line_stdin( &line ) ){
        if( n_lines == 0 ){
            n_lines = strtol( line, NULL, 10 );       
            if( n_lines == 0 ) break;
        }else{
            int gifts[5];
            int candidate = 5;
            for( int i = 0; i < 5; i++ ){
                gifts[i] = strtol( line, &line, 10 );       
                if( gifts[i] <= 127 ){
                    if(  candidate == 5 ) {
                        candidate = i;
                    }else { 
                        candidate = 5;
                        break; 
                    } 
                }
            }
            printf("%s\n", cont[candidate]);       
            n_lines--;
        }
    }
    return 0;
}


