#include <iostream>
#include <vector>   
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

using namespace std;

int is_connected( int* g, int vert, int stride );

int read_line_stdin( char **line ){
    size_t size;
    if( getline(line, &size, stdin) == -1 ) return 0;
    return 1;
}
#define N_MAX   1000
#define MAX     1000000 
int main ( ){
    char* line = NULL; 
    int n = 0;       
    int m = 0;
    int * graph = ( int * ) malloc( sizeof(int) * MAX );
    bool first = true;
    int f_a = 0, f_b = 0;
    if( graph == NULL ){
        cout << "Err! Couldn't allocate memory" << endl;
        return -1;
    }
    while( read_line_stdin( &line ) ){
        char* end = NULL;
        if( m == 0 ){
            if( *line == '\0') return -1;
            n = strtol( line, &end, 10 );       
            if( *end == '\0') return -1;
            m = strtol( end, &end, 10 );       
            if( m == 0 ) break;
            first = true;
            memset( graph, 0, MAX * sizeof(int) );
        }else{
            m--;
            if( *line == '\0') return -1;
            int a = strtol( line, &end, 10 ) - 1;       
            if( *end == '\0') return -1;
            int b = strtol( end, &end, 10 ) - 1;       
            if( *end == '\0') return -1;
            int t = strtol( end, NULL, 10 );       
            if( first ) f_a = a, f_b = b, first = false;
            graph[ a * n + b ] = t;
            if( t == 2 )
                graph[ b * n + a ] = t;
            if( m == 0 ){
                if( graph[ f_a * n + f_b ] == 2){
                    graph[ f_a * n + f_b ] = 0;
                    graph[ f_b * n + f_a ] = 0;
                }else{
                    graph[ f_a * n + f_b ] = 0;
                }
                char r = '*';
                int connected = is_connected( graph, n, n );
                if( connected == -1 ){
                    cout << "Err! Couldn't allocate memory" << endl;
                    return -1;
                }
                if( connected == 0 ){
                    //Try invert ways from b
                    for( int i = 0; i < n; i++ ){
                        if( i != f_a && graph[ f_b * n + i ] == 1 ){
                            graph[ i * n + f_b ] = 1;
                            graph[ f_b * n + i ] = 0;
                            connected = is_connected( graph, n, n );
                            if( connected == -1 ){
                                cout << "Err! Couldn't allocate memory" << endl;
                                return -1;
                            }
                            if( connected ){
                                r = '1';
                                break;
                            }
                        }
                    }
                    if( r == '*' ){
                        //Try invert ways from a
                        for( int i = 0; i < n; i++ ){
                            if( i != f_b && graph[ f_a * n + i ] == 1 ){
                                graph[ i * n + f_a ] = 1;
                                graph[ f_a * n + i ] = 0;
                                connected = is_connected( graph, n, n );
                                if( connected == -1 ){
                                    cout << "Err! Couldn't allocate memory" << endl;
                                    return -1;
                                }
                                if( connected ){
                                    r = '1';
                                    break;
                                }
                            }
                        }
                    }
                    if( r == '*' ){
                        //Try convert some ways from a in dual ways
                        for( int i = 0; i < n; i++ ){
                            for( int j = 0; j < n; j++ ){
                                if( !(i == f_a && j == f_b) && graph[ i * n + j ] == 1 ){
                                    graph[ i * n + j ] = 2;
                                    graph[ j * n + i ] = 2;
                                    connected = is_connected( graph, n, n );
                                    if( connected == -1 ){
                                        cout << "Err! Couldn't allocate memory" << endl;
                                        return -1;
                                    }
                                    if( connected ){
                                        r = '2';
                                        break;
                                    }
                                }
                            }
                            if( r == '2' ) break;
                        }
                    }
                }else{
                    r = '-';
                }
                cout << r << endl;
            }
        }
    }

    free( graph );
    return 0;
}
//BFS
int is_connected( int* g, int vert, int stride ){

    vector<bool> visit(vert);
    vector<bool>::iterator iter;
 
    for(iter = visit.begin(); iter != visit.end(); iter++)
        *iter = false;
 
    set<int> forvisit;
    set<int>::iterator current;

    forvisit.insert(0);
    while( !forvisit.empty() ){
        current = forvisit.begin();
        if( !visit[*current] ){
            for( int i = 0; i < vert; i++ ){
                if( g[*current * stride + i] >= 1 && !visit[i] ){
                    forvisit.insert(i);
                }
            }
        }
        visit[*current] = 1; 
        forvisit.erase(current); 
    }

    for(iter = visit.begin(); iter != visit.end(); iter++){
        if( !*iter ) return 0;
    }
    return 1;
}


