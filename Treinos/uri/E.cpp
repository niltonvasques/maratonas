#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, M;
	int x;
	scanf("%d %d", &N, &M);
	int lastC = -1;
	bool first = false;
	char ans = 'S';
	for(int i = 0; i < N; i++){
		first = false;
		for(int j = 0; j < M; j++){
			scanf("%d", &x);
			if(x && !first) {
				first = true;
				if(j <= lastC){
					ans = 'N';
					break;
				}
				lastC = j;				
			}
			
		}
		if(!first) lastC = M;
		if(ans == 'N') break;
	}	
	printf("%c\n", ans);

	return 0;
}
