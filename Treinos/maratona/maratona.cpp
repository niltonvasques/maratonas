#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(){
	int n, i;
	int problemas[50];
	int resultados[50];
	for(i = 0; i < 50; i++){
		problemas[i] = 0;
		resultados[i] = 0;	
	}

	scanf("%d\n", &n);
	char P[100];
	int T;
	char R[100];	
	while( n != 0 ){
		for( i = 0; i < n; i++){
			gets(s);
			cin >> T ;
			gets(s);
			printf("%s %d %s\n", P, T, R);
		}
		scanf("%d\n", &n);
	}
	return 0;
}
