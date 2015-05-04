#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bin(int *v, int size, int element){
	int center = size/2, left = 0, right = size-1;
	
	while(left < right){
		if(v[center] > element){
			right = center - 1;
		}else if(v[center] < element){
			left = center + 1;
		}else{
			return 1;
		}
		center = (left + right )/2;
	}
	if(v[center] == element) return 1;
	return 0;
}

int main(){
	int n, m;
	scanf("%d %d", &m, &n);
	while( m != 0 && n != 0){
		int P[m];
		int i;
		int b;
		for(i = 0; i < m; i++){
			scanf("%d", &P[i]);
		}
		for(i = 0; i < n; i++){
			scanf("%d", &b);
			if(bin(P, m, b)) printf("S");
			else printf("N");
		}
		printf("\n");
		scanf("%d %d", &m, &n);
	}
	
	return 0;
}
