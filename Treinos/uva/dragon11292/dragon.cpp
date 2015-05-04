#include <bits/stdc++.h>

using namespace std;

int solve(int n, int m){

  int ans = 0;
  int head, height;
  vector<int> heads;
  vector<int> heights;

  while(n){
    cin >> head;
    heads.push_back(head);
    n--;
  }
  while(m){
    cin >> height;
    heights.push_back(height);
    m--;
  }

  sort(heads.begin(), heads.end());
  sort(heights.begin(), heights.end());

  bool found = false;
  while(!heads.empty() && !heights.empty()){
    head = heads.front();
    found = false;
    while(!found && !heights.empty()){
      height = heights.front();
      if(height >= head){
        heads.erase(heads.begin()); 
        found = true;
        ans += height;
      }
      heights.erase(heights.begin());
    }
    if(!found) return 0;
  }

  return heads.empty() ? ans : 0;
}

int main(){

  int n, m;

  cin >> n >> m;

  while(n || m){

    int ans = solve(n,m);
    if(ans > 0)
      cout << ans << "\n";
    else
      cout << "Loowater is doomed!\n";

    cin >> n >> m;
  }

  return 0;
}
