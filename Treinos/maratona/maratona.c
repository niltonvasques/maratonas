#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, i;
	int problemas[50];
	int resultados[50];
	for(i = 0; i < 50; i++){
		problemas[i] = 0;
		resultados[i] = 0;	
	}
	int X = 0;
	scanf("%d\n", &n);
	char P[100];
	int T;
	char R[100];	
	X = n;


	while( X != 0 ){
		for( i = 0; i < 50; i++){
			problemas[i] = 0;
			resultados[i] = 0;
		}
		for( i = 0; i < X; i++){
			scanf("%s", P);
			scanf("%d", &T);
			scanf("%s\n", R);
			int index = P[0]-'A';
			if( !resultados[index]){
				if(strcmp(R, "incorreto") == 0){
					problemas[index] += 20;
				}else{
					problemas[index] += T;
					resultados[index] = 1;
				}
			}
		}
		int total = 0;
		int acertos = 0;
		for( i = 0; i < 50; i++){
			if(resultados[i]){
				acertos++;
				total += problemas[i];
			}
		}
		printf("%d %d\n", acertos, total);
		scanf("%d\n", &X);
	}
	return 0;
}
