#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 101
#define MAX_M 101

int carros_id[MAX_N];
int temp[2];
void swap_str_ptrs(int *arg1, int *arg2)
{
    temp[0] = arg1[0];
    temp[1] = arg1[1];
    arg1[0] = arg2[0];
    arg1[1] = arg2[1];
    arg2[0] = temp[0];
    arg2[1] = temp[1];
}

void quicksort_strs(int args[][2], unsigned int len)
{
    unsigned int i, pvt=0;

    if (len <= 1)
        return;

    //swap a randomly selected value to the last node
    int random = ((unsigned int)rand() % len);
    swap_str_ptrs(args[random],  args[len-1]);
    
    // reset the pivot index to zero, then scan
    for (i=0;i<len-1;++i)
    {
        if (args[i][1] < args[len-1][1]){
            swap_str_ptrs(args[i], args[pvt]);
            pvt++;
        }
    }

    // move the pivot value into its place
    swap_str_ptrs(args[pvt], args[len-1]);

    // and invoke on the subsequences. does NOT include the pivot-slot
    quicksort_strs(args, pvt++);
    quicksort_strs(args+pvt, len - pvt);
}

void swap( int * a){
    *a = 15;
}

void swap_mat( int* a, int size){
    int i;
    for(i = 0; i < size; i++){
        a[i] = i;
    }
}

void swap_mat_2( int a[][2], int size){
    int i,j;
    int c = 0;
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            swap_mat( a[i], size );
            //a[i][j] = c;
            c++;
        }
    }
}

int main(){  
    int i, j;
    int N, M, volta = 0;
    int carros[MAX_N][2];
    scanf("%d %d", &N, &M); 
    for(i = 0; i < N; i++){
        carros[i][0] = i+1;
        carros[i][1] = 0;
        for(j = 0; j < M; j++){
            scanf("%d", &volta); 
            carros[i][1] += volta;
        }
    }
    quicksort_strs( carros, N );
    for(i = 0; i < 3; i++) printf("%d\n", carros[i][0]);
    return 0;
}
