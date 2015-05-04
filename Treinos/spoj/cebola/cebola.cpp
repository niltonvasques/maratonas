#include <bits/stdc++.h>

#define i_pair pair<int,int>
#define i_angle_pair pair<i_pair,double>
#define mp(X,Y) make_pair((X), (Y))


#define N_MAX 2001
int dots_x[N_MAX];
int dots_y[N_MAX];

using namespace std;

bool angle_comparator(i_angle_pair x, i_angle_pair y){
  if (x.second == y.second) return (x.first < y.first);
  return (x.second < y.second);
}


// Three points are a counter-clockwise turn if ccw > 0, clockwise if
// ccw < 0, and collinear if ccw = 0 because ccw is a determinant that
// gives twice the signed  area of the triangle formed by p1, p2 and p3.
int ccw(i_pair p1, i_pair p2, i_pair p3){
      return (p2.first - p1.first)*(p3.second - p1.second) - (p2.second - p1.second)*(p3.first - p1.first);
}

bool extract_layer(vector<i_angle_pair> vec_dots, int min_y, vector<i_angle_pair> &vec_next){
  vector<i_pair> stack(min_y);
  i_pair xyp = vec_dots.at(min_y).first; 

  vec_dots.erase(vec_dots.begin()+min_y);

  //Compute angles
  //for(vector<i_angle_pair>::iterator it=vec_dots.begin(); it != vec_dots.end(); it++){
  for(auto &it : vec_dots){
    auto xy1 = it.first; 
    double angle = atan2( (double) ( xy1.second - xyp.second ) , (double)(xy1.first - xyp.first ) );
    it.second = angle * 180 / M_PI;
    //cout << it->second;
    //printf("a(%d,%d) - b(%d,%d) angle: %.2f\n", xyp.first, xyp.second, xy1.first, xy1.second, it->second );
  }

  // Sorting vector by angles
  sort(vec_dots.begin(), vec_dots.end(), angle_comparator);

  vec_dots.insert(vec_dots.begin(), {xyp,0} );

  // Taking first two points
  i_pair a = vec_dots.at(0).first;
  i_pair b = vec_dots.at(1).first;
  stack.push_back(a);
  stack.push_back(b);
  vector<i_angle_pair>::iterator it=vec_dots.begin();
  //for(vector<i_angle_pair>::iterator it=vec_dots.begin(); (it+2) != vec_dots.end(); it++){
  //printf("chosen (%d,%d), ", a.first, a.second );  
  //printf("chosen (%d,%d), ", b.first, b.second );  
  //cout << endl;
  while((it+2) != vec_dots.end()){
    i_pair a = stack[stack.size()-2];
    i_pair b = stack.back();
    i_pair c = (it+2)->first;
    int ccw_value = ccw(a, b, c);
    //printf("a(%d,%d) - b(%d,%d) - c(%d, %d) - ccw: %d\n", 
    // a.first, a.second, b.first, b.second, c.first, c.second, ccw_value );
    if (ccw_value >= 0){
     // printf("chosen (%d,%d), ", c.first, c.second );  
      stack.push_back(c);
      it++;
    }else{
      stack.pop_back();
      //printf("discard (%d,%d), ", b.first, b.second );  
      vec_next.push_back({b, 0.0});
      
    }
  }
  //cout << endl;

  // Checking if layer has zero area
  bool area_zero = true;
  //printf("(%d,%d), (%d,%d), ", stack[0].first, stack[0].second, stack[1].first, stack[1].second);
  for(int i = 0; i+2 < stack.size(); i++){
    //printf("(%d,%d), ", stack[i+2].first, stack[i+2].second);
    i_pair a = stack[i+0];
    i_pair b = stack[i+1];
    i_pair c = stack[i+2];

    if( ccw(a,b,c) != 0){
      area_zero = false;
      break;
    } 
  }
  //cout << endl;

  if( area_zero ){
    //cout << "AREA ZERO" << endl;
    return false;
  }  
  return true;
}

int main(){
  std::ios_base::sync_with_stdio(false);

  string take_output = "Take this onion to the lab!";
  string not_take_output = "Do not take this onion to the lab!";

  int N, X, Y;
  vector<i_angle_pair> vec_dots(0);

  cin >> N;


  while(N){

    vec_dots.clear();

    int pos = 0;
    int layers = 0;

    for(int i = 0; i < N; i++){
      cin >> X >> Y ;
      vec_dots.push_back({{X,Y}, 0} );
      if(vec_dots.at(pos).first.second > Y) pos = i;
    }
    bool found_layer = true;
    vector<i_angle_pair> vec_next;
    do{
      found_layer = extract_layer(vec_dots, pos, vec_next); 
      vec_dots = vec_next;
      vec_next = vector<i_angle_pair>();
      if(found_layer) layers++;
      pos = 0;
      for(int j = 1; j < vec_dots.size(); j++){
        if (vec_dots[j].first.second < vec_dots[pos].first.second) pos = j;
      }
    }while(vec_dots.size() > 2 && found_layer); 
    //cout << layers << " layers" << endl;


    if(layers % 2 != 0)
      cout << take_output << endl;
    else
      cout << not_take_output << endl;

    cin >> N;
  }


  return 0;
}
