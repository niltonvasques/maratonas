#include <stdio.h>

int main(){
	int n, i, vet[1000];
	
	scanf("%d", &n);
	for( i = 0; i < n; i++){
		scanf("%d", &vet[i] );
	}

	for( i = 0; i < n; i+=2){
		printf("%d", vet[i] );
		if( i+2 < n)	printf(" ");
	}
	printf("\n");
	for( i = 1; i < n; i+=2){
		printf("%d", vet[i] );
		if( i+2 < n)	printf(" ");
	}
	printf("\n");
	return 0;
}
