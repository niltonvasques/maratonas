#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

int main(){
	char p[MAX];	

	scanf("%s", p);
	int i = 0, j;
	while(strcmp(p, "FIM") != 0){
		int palindrome = 1;
		for(i = 0, j = strlen(p)-1; i < strlen(p)/2; i++, j--){
			if(p[i] != p[j]){
				 palindrome = 0;
				 printf("NAO\n");
				 break;
			}
		}
		if(palindrome)	printf("SIM\n");
		scanf("%s", p);
	}
	return 0;
}
