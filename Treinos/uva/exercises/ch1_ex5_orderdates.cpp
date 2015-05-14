#include <bits/stdc++.h>

class Date{

public:
  int dd, mm, yyyy;

  Date(){}
  Date(int d, int m, int y){
    this->dd = d;
    this->mm = m;
    this->yyyy = y;
  }

};

#define ull unsigned long long 

using namespace std;

int main(){
  vector<ull> dates;
  map<ull, Date> people;
  int dd, mm, yyyy;
  ull days;
  while(scanf("%d/%d/%d", &dd, &mm, &yyyy) != EOF){
    days = dd + (mm * 30) + (yyyy * 365);
    dates.push_back(days);
    Date d = Date(dd, mm, yyyy);
    people[days] = d;
  }
  sort(dates.begin(), dates.end());
  for(ull i = 0; i < dates.size(); i++) {
    Date d = people[dates[i]];
    printf("%d/%d/%d\n", d.dd, d.mm, d.yyyy);
  }

  return 0;
}
