#include <stdio.h>
#include <stdlib.h>

int main (){
	int ano, halley = 1986;
	int anoHalley;
	scanf("%d", &ano);

	halley = ano - halley;
	halley = halley % 76;
	halley -= 76;

	halley = abs(halley) + ano;

	printf("%d\n", halley);
	
	return 0;
}
