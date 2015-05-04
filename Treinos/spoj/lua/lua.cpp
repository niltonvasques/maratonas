#include <bits/stdc++.h>

#define min(A,B) ((A) < (B) ? (A) : (B) )
#define max(A,B) ((A) > (B) ? (A) : (B) )

using namespace std;

int temp[10001];


int main(){

  ios::sync_with_stdio(false);

  int n, m;
  int min_t = 1000, max_t = -1000;

  int sum = 0;
  int avg = 0;

  int teste = 1;

  cin >> n >> m;

  temp[0] = 0;


  while(n || m){
    sum = 0;
    min_t = 1000, max_t = -1000;

    for(int i = 1; i <= n; i++){
      cin >> temp[i];
      sum += temp[i];

      if(i >= m){
        sum -= temp[i-m];
        avg = sum / m; 
        min_t = min(avg, min_t);
        max_t = max(avg, max_t);
      }
    }

    cout << "Teste " << teste << endl;
    cout << min_t << " " << max_t << endl << endl;

    cin >> n >> m;
    teste++;
  }

  return 0;
}
