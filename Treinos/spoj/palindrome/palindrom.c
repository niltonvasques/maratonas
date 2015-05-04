#include <stdio.h>
#include <stdlib.h>

#define MAX_N 2001

void print_str(char* str, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%c", str[i]);
    }
    printf("\n");
}

int palindrome( char* str, int n ){
    int start, end;
    int c = 1;
    print_str(str, n);
    for(start = 0, end = n-1; start <= n/2; start++, end--){
        if(str[start] != str[end]){
            c = 0;
            break;
        }

    }
    return c;
}

int divide(char *str, int n, int points ){
    int i;
    int count = 0;
    for(i = 0; i <= points; i++){
        if(i == 0){
            if( palindrome(str, n) ) count++;
        }else{
            int j;
            for(j = 1; j < n-1; j++){
                int r = palindrome(str, j);
                if( r ){
                    r = palindrome(str+j, n-j);
                    if( r ){
                        count++;
                    }
                }
            }
        }
    }

    return count;
}

int palin_recur(char *str, int n ){
    int count = 1;
    if( n > 0 && !palindrome(str, n) ){
        count += palin_recur( str+1, n-1);
    }
    return count;
}

int main(){
    char word[MAX_N];
    int num;
    int teste = 1;
    while(scanf("%d", &num) != EOF){
        if(!num) return 0;
        scanf("%s", word);
        printf("Teste %d\n", teste);
        printf("%s %d\n", word, palin_recur(word, num));
        teste++;
    }

    return 0;
}
