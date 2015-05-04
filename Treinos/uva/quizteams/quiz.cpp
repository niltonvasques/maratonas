#include <bits/stdc++.h>

#define mp(X,Y) make_pair((X), (Y))
#define i_pair pair<int,int>
#define min(X, Y) ( (X) < (Y) ? (X) : (Y) )

#define INF (2ll << 32) 

//#define debug

using namespace std;

double hypot_pair(i_pair h1, i_pair h2){
    int x = fabs(h1.first - h2.first);
    int y = fabs(h1.second - h2.second);
    return hypot(x, y);
}

double min_dist(vector<i_pair> houses, double min, double current){
  if(houses.size() == 2) {
    i_pair h1 = houses[0];
    i_pair h2 = houses[1];
    return hypot_pair(h1,h2) + current;
  }

  i_pair h1 = houses.front(); houses.erase(houses.begin());
  for(int i = 0; i < houses.size(); i++){
    i_pair h2 = houses[i];
    houses.erase(houses.begin()+i);
    double dist = hypot_pair(h1,h2);
    //pruning if exceed minimum already found
    if( dist+current < min ){
      double new_current = min_dist(houses, min, dist+current);
      if( new_current < min ) min = new_current;
    } 
    houses.insert(houses.begin()+i, h2);
  }

#ifdef debug
  cout << "min " << min << endl;
#endif

  return min;

}

double solve(int n){
  int x, y;
  string name;

  vector<i_pair> houses;

  while(n){
    cin >> name >> x >> y;
    houses.push_back(mp(x,y));

    cin >> name >> x >> y;
    houses.push_back(mp(x,y));
    n--;
  }

  return min_dist(houses, INF, 0.0);
}

int main(){

  ios::sync_with_stdio(false);

  int n, c = 1;
  double result = 0;
  
  cin >> n;
  do{
    result = solve(n);
    cout.precision(2);
    cout << fixed << "Case " << c << ": " << result << endl;
    c++;
    cin >> n;
  }while(n);
  
  
  return 0;
}
