#include <stdio.h>

#define FORMAT_SCANF_LINE "%[^\n]%*c"
#define SFLINE(a) scanf(FORMAT_SCANF_LINE, (a)) 

int main(){

    char str3[100];


    printf ("\nEnter str1: ");
    SFLINE( str3 );
    printf ("\nstr1 = %s", str3);

    printf ("\nEnter str2: ");
    SFLINE( str3 );
    printf ("\nstr2 = %s", str3);

    printf ("\nEnter str3: ");
    SFLINE( str3 );
    printf ("\nstr2 = %s", str3);

    printf ("\n");

    return 0;
}
