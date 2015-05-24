#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N,M;
	int pinos[1001];
	int total = 0;
	scanf("%d %d", &N, &M);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &pinos[i]);
	}

	for(int i = 0; i < N; i++){
		int diff = M - pinos[i];
		pinos[i] += diff;
		pinos[i+1] += diff;
		total += abs(diff);
	}
	printf("%d\n", total);

	return 0;
}
