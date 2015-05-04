#include <stdio.h>

int main(){
	int n, k;
	int macas[100];
	int q;
	int caixas[100];
	int i;
	scanf("%d %d", &n, &k);

	for(i = 0; i < n; i++){
		scanf("%d", &macas[i]);
	}

	scanf("%d", &q);

	int primeira = 0;
	int erguidas = 0, j;
	int count = 0;
	for(i = 0; i < q; i++){
		scanf("%d", &primeira);
		primeira--;
		for(erguidas = 0, count = 0; primeira < n && count < k; primeira++, count++){
			erguidas += macas[primeira];
		}
		printf("%d\n", erguidas);
	}
	return 0;
}
