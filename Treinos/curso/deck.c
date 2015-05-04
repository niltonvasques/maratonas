#include <stdio.h>

int main(){
	int n, deck[100], i, card, repetidas = 0;

	for(i = 0 ; i < 100; i++) deck[i] = 0;

	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &card);
		deck[card]++;
	}
	for(i = 0 ; i < 100; i++){
		if(deck[i] > 1) repetidas += deck[i];
	}
	printf("%d\n", repetidas);
	return 0;

}
