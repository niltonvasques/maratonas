#include <stdio.h>

int binary_search(int *vet, int size, int element){
	int left = 0, right = size -1;
	int center = (left + right)/2;
	while(left < right){
		if(vet[center] < element){
			left = center + 1;
		}else if(vet[center] == element){
			return 1;
		}else{
			right = center-1;
		}		
		center = (left + right)/2;
	}
	if(vet[center] == element) return 1;
	return 0;
}
#define MAX_N 1000000
int a[MAX_N];

int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int m;
	scanf("%d", &m);
	int b;
	for(i = 0; i < m; i++){
		scanf("%d", &b);
		if(binary_search(a, n, b)) printf("SIM\n");
		else printf("NAO\n");
	}
	
	return 0;
}
