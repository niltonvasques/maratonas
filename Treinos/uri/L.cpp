#include <bits/stdc++.h>

using namespace std;

int main(){
	long long A, B;
	cin >> A >> B;
	long long N = 1 + B - A;
	N  = (N * (A+B))/2;
	cout << N << endl;
	return 0;
}
