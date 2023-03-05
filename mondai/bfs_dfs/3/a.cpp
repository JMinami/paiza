#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
using namespace std;

int my[4] = {1,0,-1,0};
int mx[4] = {0,1,0,-1};

int main(){
  int h,w,n;
  cin >> h >> w >> n;
  int y,x;
  cin >> y >> x;

  // 移動済み配列 0(初期値), 1(移動済み)
  vector<vector<int>> m(h, vector<int>(w));
  m[y][x] = 1;

  // 次移動するマスと歩数
  queue<pair<pair<int,int>,int>> q;
  // 初期化
  q.push({{y,x},0});

  while(!q.empty()){
    pair<pair<int,int>,int> t = q.front(); q.pop();
    int count=t.second;
    if (count >= n) continue;
    count++;
    for(int i=0; i<4; i++){
      int ty=t.first.first+my[i];
      int tx=t.first.second+mx[i];
      if(ty>=0 && ty<h && tx>=0 && tx<w){
        // 移動可能
        if(m[ty][tx]==1) continue;
        m[ty][tx]=1;
        q.push({{ty,tx},count});
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