#include <stdio.h>
#include <stdlib.h>


int main(){
	int i, j, c;
	float media, nota;
	do{
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
		scanf("%d",&c);
	}while( c );

	return 0;
}
