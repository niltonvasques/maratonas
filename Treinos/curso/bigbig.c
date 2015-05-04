#include <stdio.h>

void sort_dec(int *vet, int size){
	int i, j, aux;
	int menorPos = 0;
	for(i = 0; i < size; i++){
		menorPos = i;
		for(j = i+1; j < size; j++){
			if(vet[menorPos] < vet[j]){
				//printf("%d > %d\n",vet[menorPos], vet[j]);
				//printf("%d\n", vet[j]);
				menorPos = j;
			}else{
				//printf("%d < %d\n",vet[menorPos], vet[j]);
			}
		}	
		aux = vet[i];
		vet[i] = vet[menorPos];
		vet[menorPos] = aux;		
		//printf("troca %d <> %d\n",menorPos, i);
	}
}

void sort_asc(int *vet, int size){
	int i, j, aux;
	int menorPos = 0;
	for(i = 0; i < size; i++){
		menorPos = i;
		for(j = i+1; j < size; j++){
			if(vet[menorPos] > vet[j]){
				//printf("%d > %d\n",vet[menorPos], vet[j]);
				//printf("%d\n", vet[j]);
				menorPos = j;
			}else{
				//printf("%d < %d\n",vet[menorPos], vet[j]);
			}
		}	
		aux = vet[i];
		vet[i] = vet[menorPos];
		vet[menorPos] = aux;		
		//printf("troca %d <> %d\n",menorPos, i);
	}
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n], c[m], i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < m; i++){
		scanf("%d", &c[i]);
	}
	sort_dec(a, n);
	sort_asc(c, m);
	int custo = 0;
	for(i = 0; i < n; i++){
		//printf("%d ", a[i]);
		custo += a[i] * c[i];
	}
/*	printf("\n");
	for(i = 0; i < m; i++){
		printf("%d ", c[i]);
	}*/
	printf("%d\n", custo);
	
	
	return 0;
}
