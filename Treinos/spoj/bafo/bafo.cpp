#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);

  int R;
  int A,B;
  int totalA , totalB;

  int teste = 1;

  cin >> R;

  while(R){
    
    totalA = totalB = 0;

    for(int i = 0; i < R; i++){
      cin >> A >> B;
      totalA += A;
      totalB += B;
    }

    cin >> R;
    cout << "Teste " << teste++ << endl;
    cout << (totalA > totalB ? "Aldo" : "Beto") << endl << endl;
  }

  return 0;
}
