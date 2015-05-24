#include <bits/stdc++.h>

#define ENTRE(X, L, R) ( (X) >= (L) && (X) <= (R) )

using namespace std;

int main(){
	
	int Q, S = 0, N = 0, X;
	scanf("%d", &Q);
	for(int i = 0; i < Q; i++){
		scanf("%d", &X);
		if(!X) S++;
		else N++;
	}
	printf("%c\n", (S > N) ? 'S' : 'N');

	return 0;
}
