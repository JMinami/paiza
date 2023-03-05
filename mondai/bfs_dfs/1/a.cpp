#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int h,w,x,y;
  cin >> h >> w;
  cin >> y >> x;

  int my[4] = {-1, 0, 1, 0};
  int mx[4] = {0, 1, 0, -1};

  for (int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      bool movable = false;
      for(int k=0; k<4; k++){
        int nx, ny;
        ny = my[k] + y;
        nx = mx[k] + x;
        if (y ==i && x ==j){
          movable = true;
          break;
        }
        if (ny == i && nx == j){
          movable = true;
          break;
        }
      }
      if (movable) {
        cout << "*";
      } else {
        cout << ".";
      }
    }
    cout << endl;
  }
}