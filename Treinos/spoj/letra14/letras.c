#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000
int histogram[MAX];

int main (){
    char letra[2] = {' ','\0'};
    char word[255] = "";
    unsigned int sum = 0;
    unsigned int appears = 0;
    while(1){
        scanf("%c\n",&letra[0] );
        while(scanf("%s",word) != EOF){
            if( strstr(word, letra) != NULL ){
                appears++;
            }            
            sum++;
        }
        break;
    }
    float result = 0; 
    if(sum != 0) result = (float) appears / (float) sum;
    result *= 100;
    //printf("appears: %d\n",appears);
    //printf("sum: %d\n",sum);
    printf("%.1f\n",result);
    return 0;
}
