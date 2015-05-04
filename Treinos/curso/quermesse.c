#include <stdio.h>

int main(){

	int n, x, i, ordem = 1, teste = 1;
	scanf("%d", &n);
	do{
		ordem = 1;
		for(i = 0; i < n; i++, ordem++){
			scanf("%d", &x);
			if(ordem == x){
				printf("Teste %d\n", teste);
				printf("%d\n\n", x);
			}
		}
		teste++;
		scanf("%d", &n);
	}while(n);
		
	return 0;
}
