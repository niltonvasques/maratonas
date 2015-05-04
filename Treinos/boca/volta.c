#include <stdio.h>

int main(){
    int x, y;

    int voltax = 1;
    int voltay = 1;

    int tempo = 0;

    scanf("%d %d", &x, &y);

    while( voltax <= voltay + 1){
        tempo += x;
        voltax = tempo / x;
        voltay = tempo / y;
        if( y % x == 0 && tempo / x == y / x) break;
    }

    printf("%d\n", voltax);

    return 0;
}
