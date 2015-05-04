#include <stdio.h>
#include <string.h>

int main(){
	char string[51];
	int i, j;
	scanf("%s", string);
	
	int size = strlen(string);

	for(i = 0; i < size; i++){
		switch(string[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				break;
			default:
				printf("%c",string[i]);	
				break;		
		}
	}
	printf("\n");

	return 0;
}
