#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N;
	char t[101][101];
	
	int max = 0;
	int current = 0;

	scanf("%d", &N);
	for(int i = 0; i < N; i++){
			scanf("%s", t[i]);
	}
	int pos = 0;
	for(int i = 0; i < N; i++){
		if(i % 2) pos = (N-1);							
		else pos = 0;			
		for(int j = 0; j < N; j++){
			//printf("%d ->", pos);
			switch(t[i][pos]){
				case 'o':
					current++;
					break;
				case 'A':
					if(current > max) max = current;
					current = 0;
					break;
				default:
					break;
			}
			if(i % 2) pos--;							
			else pos++;
		}	
		//printf("\n");
	}
	if(current > max) max = current;
	printf("%d\n", max);

	return 0;
}
/*
56789
5-4
6+2
7+1
*/
