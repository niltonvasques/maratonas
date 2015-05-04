#include <stdio.h>

int main (){
	int x[3], y[3], conteiners = 1, i;
	for(i = 0; i < 3; i++){
		scanf("%d", &x[i]);
	}
	for(i = 0; i < 3; i++){
		scanf("%d", &y[i]);
		conteiners *= (y[i] / x[i]);
	}
	printf("%d\n",conteiners);
	return 0;
}
