#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1001

int main (){
    int i;
    char num[MAX] = "";
    while(scanf("%s",num) != EOF){
        int check = 0;
        int size = strlen(num);
        if( size == 1 && num[0] == '0' ) break;
        for(i = 0; i < size; i++){
            if(i % 2 == 0) check += num[i] - '0';
            else check -= num[i] - '0';
        }
        if( check == 0 || check % 11 == 0) printf("%s is a multiple of 11.\n",num);
        else printf("%s is not a multiple of 11.\n",num);
    }
    return 0;
}
