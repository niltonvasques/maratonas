#include <stdio.h>

#define MAX 10001
int main(){
	int n, palitos[MAX];
	scanf("%d", &n);
	int t, q, i;
	while(n){
		for(i = 0; i < MAX; i++){
				palitos[i]  = 0;
		}
		for(i = 0; i < n; i++){
			scanf("%d %d", &t, &q);	
			if(q > 1)	
				palitos[t] += q;
		}
		int total_ret = 0;
		int sobra_total = 0;
		for(i = 0; i < MAX; i++){
			if(!palitos[i]) continue;
			//printf("palitos %d\n", palitos[i]);
			total_ret += palitos[i] / 4;
			int sobra = palitos[i] % 4;
			if(sobra > 1){
			 	sobra_total += 2;
			}			
		}
		total_ret += sobra_total / 4;
		printf("%d\n", total_ret);
		scanf("%d", &n);
	}
	return 0;
}
