#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 101
#define MAX_SIZE 21

void swap_str_ptrs(char **arg1, char **arg2)
{
    char *tmp = *arg1;
    *arg1 = *arg2;
    *arg2 = tmp;
}

void quicksort_strs(char *args[], unsigned int len)
{
    unsigned int i, pvt=0;

    if (len <= 1)
        return;

    //swap a randomly selected value to the last node
    swap_str_ptrs(args+((unsigned int)rand() % len), args+len-1);

    // reset the pivot index to zero, then scan
    for (i=0;i<len-1;++i)
    {
        if (strcmp(args[i], args[len-1]) < 0)
            swap_str_ptrs(args+i, args+pvt++);
    }

    // move the pivot value into its place
    swap_str_ptrs(args+pvt, args+len-1);

    // and invoke on the subsequences. does NOT include the pivot-slot
    quicksort_strs(args, pvt++);
    quicksort_strs(args+pvt, len - pvt);
}

char t[MAX_SIZE];
void bubble_sort_strs(char* args[], int size){
    int i,j;
    for (i = 1; i < size; i++) {
        for (j = 1; j < size; j++) {
            if (strcmp(args[j - 1], args[j]) > 0) {
                strcpy(t, args[j - 1]);
                strcpy(args[j - 1], args[j]);
                strcpy(args[j], t);
            }
        }
    }
}
int main(){
    int i;
    char * alunos[MAX_N];
    int N, K;
    scanf("%d %d", &N, &K); 
    for( i = 0; i < MAX_N; i++){
        alunos[i] = (char*) malloc( sizeof(char) * MAX_SIZE );
    }
    for(i = 0; i < N; i++){
        scanf("%s", alunos[i]); 
    }
    quicksort_strs( alunos, N );
    //bubble_sort_strs( alunos, N );

    printf("%s\n",alunos[K-1]);

    for( i = 0; i < MAX_N; i++){
        free(alunos[i]);
    }

    return 0;
}
