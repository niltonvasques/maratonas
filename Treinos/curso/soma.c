#include <stdio.h>

int main(){

	int n, soma = 0, x, i;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &x);
		soma += x;
	}

	printf("%d\n", soma);
		
	return 0;
}
