#include <bits/stdc++.h>

#define ENTRE(X, L, R) ( (X) >= (L) && (X) <= (R) )

using namespace std;

int main(){
	
	int N, LA, LB, SA, SB;

	scanf("%d %d %d %d %d", &N, &LA, &LB, &SA, &SB);
	printf("%s\n", ( ENTRE(N, LA, LB) && ENTRE(N, SA, SB) ) ? "possivel" : "impossivel" );

	return 0;
}
