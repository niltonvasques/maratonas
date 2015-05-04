#include <stdio.h>

int main (){
	int l, d;
	int k, p;
	int pedagios;
	int custo;
	scanf("%d %d", &l, &d);
	scanf("%d %d", &k, &p);

	pedagios = l / d;
	custo = l * k + pedagios * p;
	
	printf("%d\n", custo);
	
	return 0;
}
