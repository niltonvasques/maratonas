#include <stdio.h>

int main(){
    int d, vf, vg;

    float tf, tg;

    scanf("%d %d %d", &d, &vf, &vg);

    tf = (12 - d) / (float)vf;

    tg = 12 / (float) vg;

    printf("%f %f\n", tf, tg);

    if( tf <= tg )
        printf("N\n");
    else
        printf("S\n");

    return 0;
}
