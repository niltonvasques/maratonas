#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int Q, E, x;	
	int si[10000];

	memset(si, 0, sizeof(si));

	cin >> Q >> E;
	for(int i = 0; i < E; i++) {
		cin >> x;
		si[x] = 1;

	}
	for(int i = 0; i < Q; i++){
		cin >> x;
		if(si[x]) printf("0\n");
		else printf("1\n");
		si[x] = 1;
	}

	return 0;
}
