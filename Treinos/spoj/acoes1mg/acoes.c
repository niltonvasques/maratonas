#include <stdio.h>
#define MAX 1001

int E = 1;

void parted(int N, int K){
    if(N > K){
        int p1 = N/2;
        int p2 = N - p1;
        E++;
        parted(p1, K);
        parted(p2, K);
    }
}

int main(){

    int N, K;
    while(scanf("%d %d", &N, &K) != EOF){
        if(N == 0 && K == 0) break;
        parted(N, K);
        printf("%d\n",E);
        E = 1;
    }

    return 0;
}
