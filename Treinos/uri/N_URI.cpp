#include <bits/stdc++.h>

#define ull   unsigned long long 
#define ll    long long 

using namespace std;

ull modular(ull base, ull exp, ull mod)
{
    ull x = 1;
    ull power = base % mod;

    for (ull i = 0; i < sizeof(ull) * 8; i++) {
            ull least_sig_bit = 0x00000001 & (exp >> i);
            if (least_sig_bit)
                x = (x * power) % mod;
            power = (power * power) % mod;
        }

    return x;
}

int main(){
	
	ull R;
        ull mod = (2ull << 30) -1;
	scanf("%lld", &R);
	ull sum = 1;

        sum = modular(3, R, mod);

	printf("%lld\n", sum );

	return 0;
}
