#include <stdio.h>

int main(){
	int n, m;
	int i, j;
	scanf("%d %d", &n, &m);
	int matrix[n][m];
	int matrix_2[n][m];
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			scanf("%d", &matrix[i][j]);

	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &matrix_2[i][j]);
			printf("%d", matrix[i][j] + matrix_2[i][j]);
			if(j < m-1) printf(" ");
		}
		printf("\n");
	}
	
	
		
	return 0;
}
