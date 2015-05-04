#include <stdio.h>

int main(){
	int n, j, z, i;
	int saldo = 0, teste = 1;
	scanf("%d", &n);
	while(n){
		saldo = 0;
		printf("Teste %d\n", teste++);
		for(i = 0; i < n; i++){
			scanf("%d %d", &j, &z);
			saldo += j - z;
			printf("%d\n", saldo);
		}
		printf("\n");
		scanf("%d", &n);
	}
	return 0;
}
