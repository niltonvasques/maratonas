#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d\n", &n, &m);
	char braile[n][m];
	int i, j;
//	scanf("%c",&braile[0][0]);
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++){
			scanf("%c\n",&braile[i][j]);
	//		printf("%c",braile[i][j]);
		}
	//printf("\n");
	int run = 1;
	for(j = 0;j < m && run; j++){
		for(i = n-1; i >= 0 && run; i--){
			if(braile[i][j] == '-')
				braile[i][j] = ' ';
			else
				run = 0;
		}
	}
//	printf("\n");
	int readSpace = 0;
	for(j = m-1;j >= 0; j--){
		for(i = 0; i < n; i++){
			switch(braile[i][j]){
				case '-':
					if(!readSpace)
						printf(" ");
					readSpace = 1;
					break;
				case ' ':
					break;
				default:
					readSpace = 0;
					printf("%c", braile[i][j]);
					break;
			}
		}
	}
	
	printf("\n");
	return 0;
}
