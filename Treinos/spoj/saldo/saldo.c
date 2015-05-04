#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b) )

int main(){

    int n;
    int t = 1;
    int x, y;
    int i;
    int max_end_here, max_so_far;
    int start, end;
    scanf("%d", &n);
    while(n){
        int greater_start = 0, greater_end = 0, greater_max = 0, next_start = 0;
        for(i = 0; i < n; i++){
            scanf("%d %d", &x, &y);
            x -= y;
            if(i == 0){
              greater_start = start = i+1;
              greater_end = end = i+1;
              greater_max = max_so_far = max_end_here = x;
            }else{
              if(max_end_here + x >= 0){
                if( max_end_here + x < x){
                  max_end_here = x;
                  next_start = i+1;
                }else{
                  max_end_here += x;
                }
              } else { 
                max_end_here = x;
                next_start = i+1;
              }
              if(max_so_far <= max_end_here){
                end = i+1;
                max_so_far = max_end_here;
                if(next_start){
                  start = next_start;
                  next_start = 0;
                }
                if(greater_max < max_so_far){
                  greater_max = max_so_far;
                  greater_start = start;
                  greater_end = end;
                }else if(greater_max == max_so_far && 
                    (greater_end - greater_start < end - start)) {
                  greater_start = start;
                  greater_end = end;
                }
              }

            } 
        }
        printf("Teste %d\n", t++);
        if(max_so_far > 0)
            printf("%d %d\n\n", greater_start, greater_end);
        else
            printf("nenhum\n\n");
        scanf("%d", &n);
    }
    return 0;
}
