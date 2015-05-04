#include <stdio.h>
#include <math.h>

int divisors(int x) {
    int limit = x;
    int numberOfDivisors = 0;
    int i;
    for (i = 1; i <= limit; ++i) {
        if (x % i == 0) {
            limit = x / i;
            if (limit != i) {
                numberOfDivisors++;
            }
            numberOfDivisors++;
        }
    }

    return numberOfDivisors;
}

int fatores(int n){
    int i=2;
    int count = 2;
    if(n == 1) count --;
    while(i < sqrt(n))
    {
        if(n%i==0) {
            count += 2;
        }
        i++;
    }
    if(i*i == n) count++;
    return count;
}

int main(){
    int n;
    scanf("%d", &n);
    int i;
    for(i = 1; i <= n; i++){
/*        int j = 1;
        int mult = i;
        while(mult <= n){
            portas[mult] = !portas[mult];
            mult = i * (++j);
        }
*/
        if(fatores(i) % 2 != 0)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
