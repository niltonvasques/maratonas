#include <stdio.h>

int main(){

	int n, m;
	scanf("%d %d", &n, &m);
	int a[n][m];
	int i, j;
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)	
			scanf("%d", &a[i][j]);
	int p, q;
	scanf("%d %d", &p, &q);
	int b[p][q];
	for(i = 0; i < p; i++){
		for(j = 0; j < q; j++){	
			scanf("%d", &b[i][j]);
		}
	}
	int c[n][q];
	int k;
	for(j = 0; j < q; j++){	
		for(i = 0; i < n; i++){
			c[i][j] = 0;
			for(k = 0; k < m; k++){
				c[i][j] += a[i][k] * b[k][j];
				//printf("%d * %d\n", a[i][k], b[k][j]);
			}
		}
	}

	for(i = 0; i < n; i++){
		for(j = 0; j < q; j++){	
			printf("%d", c[i][j]);
			c[i][j] = 0;
			if( j < q-1) printf(" ");
		}
		printf("\n");
	}

	
	return 0;
}
