#include <stdio.h>
#include <stdlib.h>


int main(){
	int i, j;
	float media, nota;
	for(i = 0; i < 30; i++){
		media = 0;
		for(j = 0; j < 4; j++){
			scanf("%f",&nota);
			media += nota;
		}		
		media /= 4.0;	
		if( media < 7.0 )
			printf("Aluno reprovado\n");
		else
			printf("Aluno aprovado\n");
	}
	return 0;
}
