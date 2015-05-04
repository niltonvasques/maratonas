#include <stdio.h>

void sort(int *vet, int size){
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
	int n, i;
	scanf("%d", &n);
	int v[n];
	for(i = 0; i < n; i++)
		scanf("%d", &v[i]);
	sort(v, n);
	int maior = 0;	
	for(i = 0; i < n; i+=2){
		int diff = v[i+1]-v[i];
		//printf("diff %d\n", diff);
		if( diff > maior){
			 maior = diff;
		}
	}
	printf("%d\n", maior);
	return 0;
}
