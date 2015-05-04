#include <stdio.h>

void quickSort( int a[], int l, int r)
{
   int j;

   if( l < r ) 
   {
   	// divide and conquer
        j = partition( a, l, r);
       quickSort( a, l, j-1);
       quickSort( a, j+1, r);
   }
	
}



int partition( int a[], int l, int r) {
   int pivot, i, j, t;
   pivot = a[l];
   i = l; j = r+1;
		
   while( 1)
   {
   	do ++i; while( a[i] <= pivot && i <= r );
   	do --j; while( a[j] > pivot );
   	if( i >= j ) break;
   	t = a[i]; a[i] = a[j]; a[j] = t;
   }
   t = a[l]; a[l] = a[j]; a[j] = t;
   return j;
}


int main(){
	int p, d, i;
	int pontos[1000];
	scanf("%d %d", &p, &d);
	for(i = 0; i < p; i++){
		scanf("%d", &pontos[i]);
	}
	quickSort(pontos, 0, p-1);	
	for(i = 0; i < d; i++){
		printf("%d\n", pontos[i]);
	}
	return 0;

}
