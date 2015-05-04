#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x0;
    int x1;
    int y0;
    int y1;
    int w;
    int h;
} RECT;

void print_rect( RECT r ){
    printf("x0 %d y0 %d x1 %d y1 %d w %d h %d\n", r.x0, r.y0, r.x1, r.y1, r.w, r.h );
}

int collide( RECT r[2] ){
    r[0].w = abs( r[0].x0 - r[0].x1 );
    r[0].h = abs( r[0].y0 - r[0].y1 );
    r[1].w = abs( r[1].x0 - r[1].x1 );
    r[1].h = abs( r[1].y0 - r[1].y1 );

    if( r[0].x0 > r[1].x0 + r[1].w ) return 0;
    if( r[0].y0 > r[1].y0 + r[1].h ) return 0;
    if( r[0].x0 + r[0].w < r[1].x0 ) return 0;
    if( r[0].y0 + r[0].h < r[1].y0 ) return 0;
    return 1;
}

int main(){  
    int i;

    RECT rects[2];

    for(i = 0; i < 2; i++ ){
        scanf("%d %d %d %d", &rects[0].x0, &rects[0].y0, &rects[0].x1, &rects[0].y1); 
        scanf("%d %d %d %d", &rects[1].x0, &rects[1].y0, &rects[1].x1, &rects[1].y1); 
    }

    int r = collide( rects );
    printf("%d\n", r );    

    return 0;
}
