#include <bits/stdc++.h>

using namespace std;

int main(){
	
	char mat[4][100];
	int nums[100];
	int size;
	for(int i = 0; i < 4; i++){
		scanf("%s", mat[i]);	
	}
	size = strlen(mat[0]);
	for(int i = 0; i < size; i++){
		nums[i] = ((mat[0][i]-'0') * 1000)  + ((mat[1][i]-'0') * 100) + ((mat[2][i]-'0') * 10) + (mat[3][i]-'0');
	}

//Ci = (F * Mi + L) mod 257
	for(int i = 0; i < size-2; i++){
		char c = ( ( nums[0] * nums[i+1] + nums[size-1] ) % 257 ) ;
		printf("%c", c);
	}
	printf("\n");
	return 0;
}
