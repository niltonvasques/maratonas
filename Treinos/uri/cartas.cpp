#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int last = 0;
	int x;
	char O = 'N';
	bool equals = true;
	bool found = false;
	for(int i = 0; i < 5; i++){
		scanf("%d", &x);
		if(i == 0) last = x;
		else{
			if(last == x && equals) continue;
			else{
				equals = false;
				if(!found){
					if(x < last) O = 'D';
					else O = 'C';
				}else{
					if(O == 'D' && x > last) O = 'N';
					if(O == 'C' && x < last) O = 'N';
				}
				found = true;
				last = x;
			}
		}
	}
	printf("%c\n", O);	

	return 0;
}
