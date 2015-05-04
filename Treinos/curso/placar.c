#include <stdio.h>
#include <string.h>

void sort(char s[101][21], int n)
{
    int i, j, cmp;
    char tmp[21];

    if (n <= 1)
        return; // Already sorted

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            cmp = strcmp(s[j], s[j+1]);

            if (cmp > 0)
            {
                strcpy(tmp, s[j+1]);
                strcpy(s[j+1], s[j]);
                strcpy(s[j], tmp);
            }
        }
    }
}

int main(){
	int n, i;
	char alunos[101][21];
	char alunos_2[101][21];
	int alunos_reprovados[101];
	int notas[101];
	int index_reprovado = -1;
	int menor = 11;
	int instancia = 1;
	scanf("%d", &n);
	
	while(n){
		menor = 11;
		index_reprovado = -1;
		for(i = 0; i < n; i++){
			scanf("%s %d", alunos[i], &notas[i]);
			if(notas[i] < menor){
				menor = notas[i];
				index_reprovado = 0;
				alunos_reprovados[index_reprovado++] = i;
			}else if( notas[i] == menor ){
				alunos_reprovados[index_reprovado++] = i;
			}
		}
		for(i = 0; i < index_reprovado; i++){
			strcpy(alunos_2[i], alunos[alunos_reprovados[i]]); 
		}
		sort(alunos_2, index_reprovado);
		scanf("%d", &n); 
		printf("Instancia %d\n", instancia++);
		printf("%s\n", alunos_2[index_reprovado-1]);
		printf("\n");
	}
	
	
	
	return 0;
}
