#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_N 2000

#define DISCARDED -1
#define TAKED 1
#define AVAILABLE 0 

typedef struct{
    int x;
    int y;
} PONTO;

PONTO pontos[MAX_N];
int status_pontos[MAX_N];

void clear(int N){
    int i;
    for(i = 0; i < N; i++){
        status_pontos[i] = AVAILABLE;
    }
}

int min_point(int N){
    int i;
    int min = -1;
    for(i = 0; i < N; i++){
        if( status_pontos[i] != AVAILABLE) continue;
        if(min == -1){
            min = i;
            continue;
        }
        if(pontos[i].y < pontos[min].y){
            min = i; 
        }else if(pontos[i].y == pontos[min].y && pontos[i].x < pontos[min].x){
            min = i; 
        }
    }
    return min;
}

void enclosing_points(int first, int min, int N){
        int choice = min;
        float min_degrees = 180.0;
        int i;
        int size = N;
        for(i = 0; i < N; i++){
            if(status_pontos[i] != AVAILABLE){
                size--;
                continue;
            }   
            int x = pontos[min].x - pontos[i].x;
            int y = pontos[min].y - pontos[i].y;
            float result = atan2( y, x );
            float degrees = result * 180 / M_PI;
            if(degrees < min_degrees){
                min_degrees = degrees;
                choice = i;
            }else if( degrees == 180.0 ){
                min_degrees = degrees;
                choice = i;
                break;
            }
        }
        if(size == 0) return;
        //printf("Next Point %d %f\n", choice, min_degrees);
        status_pontos[choice] = TAKED;
        if(choice == first){
            //printf("Finish layer %d\n", choice);
            return;
        }
        enclosing_points(first, choice, N);
}

#define NEGATIVE_ANSWER "Do not take this onion to the lab!\n"
#define POSITIVE_ANSWER "Take this onion to the lab!\n"

void teste(){
    int tx = 0, ty = 10;
    int qx = 0, qy = 0;
    int x = qx - tx;
    int y = qy - ty;
    float result = atan2( y, x );
    float degrees = result * 180 / M_PI;
    printf("degrees %f\n",degrees);
}

int main(){  
    int i;
    int N;
    int min;
    while( scanf("%d", &N) != EOF ){
        if(N == 0) return 0;
        clear(N);
        for(i = 0; i < N; i++){
            scanf("%d %d",&pontos[i].x, &pontos[i].y);
            //printf("Px %d Py %d\n",pontos[i].x, pontos[i].y);
        }
        int layers = 0;
        min = min_point(N);
        do{
            enclosing_points(min, min, N);
            min = min_point(N);
            layers++;
        }while(min != -1);
        if(layers % 2 == 0){
            printf(NEGATIVE_ANSWER);
        }else{
            printf(POSITIVE_ANSWER);
        }
        //printf("%d\n",layers);
    }
    return 0;
}
