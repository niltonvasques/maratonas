#include <stdio.h>

int main (){
	int x, tomadas, i;
	for(i = 0; i < 4; i++){
		scanf("%d", &x);
		tomadas += x;
	}
	tomadas-= 3;
	printf("%d\n",tomadas);
	return 0;
}
