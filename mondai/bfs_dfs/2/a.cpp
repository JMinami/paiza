#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
using namespace std;

int my[4] = {1,0,-1,0};
int mx[4] = {0,1,0,-1};

int main(){
  int h,w,y,x;
  cin >> h >> w >> y >> x;

  // 移動可能なマスの二次元配列 0(初期値), 1(移動可能)
  queue<pair<pair<int,int>,int>> q;
  q.push({{y,x}, 0});

  vector<vector<int>>m(h, vector<int>(w));
  m[y][x]=1;

  while(!q.empty()){
    pair<pair<int,int>, int> p = q.front();
    q.pop();
    for(int i=0; i<4; i++){
      int ty=p.first.first+my[i];
      int tx=p.first.second+mx[i];
      int count=p.second;
      if (count >= 3){
        break;
      }
      if(ty >= 0 && ty < h && tx >= 0 && tx < w){
        // 移動可能
        if (m[ty][tx] == 0){
          // 移動済みでない
          count++;
          q.push({{ty, tx}, count++});
          m[ty][tx] = 1;
        }
      }
    }
  }
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      cout << m[i][j]; 
    }
    cout << endl;
  }
}