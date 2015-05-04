#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <stdlib.h>

inline void swap_int_ptrs(int *arg1, int *arg2)
{
    int temp = *arg1;
    *arg1 = *arg2;
    *arg2 = temp;
}

inline void quicksort_ints(int args[], unsigned int len)
{
    unsigned int i, pvt=0;

    if (len <= 1)
        return;

    //swap a randomly selected value to the last node
    int random = ((unsigned int)rand() % len);
    swap_int_ptrs(&args[random],  &args[len-1]);
    
    // reset the pivot index to zero, then scan
    for (i=0;i<len-1;++i)
    {
        if (args[i] < args[len-1]){
            swap_int_ptrs(&args[i], &args[pvt]);
            pvt++;
        }
    }

    // move the pivot value into its place
    swap_int_ptrs(&args[pvt], &args[len-1]);

    // and invoke on the subsequences. does NOT include the pivot-slot
    quicksort_ints(args, pvt++);
    quicksort_ints(args+pvt, len - pvt);
}

#endif
