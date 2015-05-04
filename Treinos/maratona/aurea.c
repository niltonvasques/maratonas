#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

float aurea(int x){
	int i = 2;
	int ant = 1, prox = 1;
	for(i = 2; i < x; i++){
		int aux = prox;
		prox = ant + prox;
		ant = aux;
	}
	float aurea = (float)prox / (float)ant;
	return aurea;	
}

int main(){
	int n;
	scanf("%d", &n);

	while( n > 1){
		printf("%.5f\n",aurea(n));
		scanf("%d", &n);
	}
	return 0;
}
