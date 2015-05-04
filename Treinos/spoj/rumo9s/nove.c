#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1001

int main (){
    int i;
    char num[MAX] = "";
    char num_orig[MAX] = "";
    while(scanf("%s",num) != EOF){
        strcpy(num_orig, num);
        int check = 0;
        int degree = 1;
        int size = strlen(num);
        if( size == 1 && num[0] == '0' ) break;
        do{
            check = 0;
            for(i = 0; i < size; i++){
                check += num[i] - '0';
            }
            if( check > 9 ){
                sprintf(num, "%d", check);
                size = strlen(num);
                degree++;
            }
        }while( check > 9 );
        if( check == 9 ) printf("%s is a multiple of 9 and has 9-degree %d.\n", num_orig, degree);
        else printf("%s is not a multiple of 9.\n",num_orig);
    }
    return 0;
}
