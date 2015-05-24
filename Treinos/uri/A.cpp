#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, M;
	scanf("%d %d", &N, &M);
	int casas[45001];
	int enc;
	int pos = 0;
	int time = 0;
	for(int i = 0; i < N; i++){
		scanf("%d", &casas[i]);
	}

	for(int i = 0; i < M; i++){
		scanf("%d", &enc);
		int left = 0, right = N-1;
		int center = (left+right)/2;
		while(left < right){
			if(casas[center] > enc){
				right = center-1;
			}else if(casas[center] < enc){
				left = center +1;
			}else{
				break;
			}
			center = (left+right)/2;
		}
		time += abs(pos-center);
		pos = center;		
	}
	printf("%d\n", time);

	return 0;
}
