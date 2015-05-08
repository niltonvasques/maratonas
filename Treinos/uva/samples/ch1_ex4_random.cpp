#include <bits/stdc++.h>

using namespace std;

vector<int> numbers;
map<int,int> hist;

void solve(){ // O(N log N);
  sort(numbers.begin(), numbers.end()); // O(N log N)
  while(!numbers.empty()){ // O(N)
    int unique = numbers.front(); // Next unique candidate
    numbers.erase(numbers.begin());
    if(!numbers.empty() && numbers.front() == unique){
      while(!numbers.empty() && numbers.front() == unique) numbers.erase(numbers.begin()); // Skipping all not unique numbers
    }else{                    // If unique candidate differ from next number then he is unique OR
      printf("%d\n", unique); // If next candidate is the last member of vector, then he is unique. 
    }
  }
}

void solve2(){ // O(N) Check unique numbers without sort it 
  for(unsigned long i = 0; i < numbers.size(); i++)
    if( hist[numbers[i]] == 1) cout << numbers[i] << endl;
}

void solve3(){ // O(N + U_n log U_n )
  vector<int> uniques;
  for(unsigned long i = 0; i < numbers.size(); i++)
    if( hist[numbers[i]] == 1) uniques.push_back(numbers[i]);
  sort(uniques.begin(), uniques.end());
  for(unsigned long i = 0; i < uniques.size(); i++) cout << uniques[i] << endl;
}

int main(){
  int x;
  while(scanf("%d", &x) != EOF){ // O(N)
    numbers.push_back(x);
    hist[x] = hist[x] + 1;
  }
  //solve();
  //solve2();
  solve3();
  return 0;
}
