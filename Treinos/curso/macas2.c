#include <stdio.h>

int main(){
	int n, k;
	int i;
	scanf("%d %d", &n, &k);
	int macas[n];
	int erguidas = 0, j;
	int erguidas_max = 0;
	int first = 0;
	for(i = 0; i < n; i++){
		scanf("%d", &macas[i]);
		if( i < k ){
			erguidas += macas[i];
			erguidas_max = erguidas;
		}else{
			erguidas = erguidas - macas[i-k] + macas[i];
			if( erguidas > erguidas_max) erguidas_max = erguidas;
		}				
	}
	printf("%d\n", erguidas_max);
	return 0;
}
