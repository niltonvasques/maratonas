#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int sum = 0;
	int r;
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++){
			scanf("%d", &r);
			if(j > i) sum+= r; 
		}
	printf("%d\n", sum);
	return 0;
}
