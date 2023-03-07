#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
using namespace std;

int my[4]={1,0,-1,0};
int mx[4]={0,1,0,-1};

int main(){
  int h, w, n;
  cin >> h >> w >> n;
  int y, x;
  cin >> y >> x;

  vector<vector<char>>arr(h,vector<char>(w));
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      cin >> arr[i][j];
    }
  }

  // 次訪れるマスと移動数
  queue<pair<pair<int, int>, int>>q;
  q.push({{y,x},0});
  arr[y][x]='*';

  while(q.size()>0){
    pair<pair<int, int>,int> next = q.front();
    q.pop();
    int ny = next.first.first;
    int nx = next.first.second;
    int count = next.second;
    if (count >= n) continue;

    count++;
    for(int i=0; i<4; i++){
      int vy = ny + my[i];
      int vx = nx + mx[i];
      if (vy>=0 && vy<h && vx>=0 && vx<w) {
        // 壁判定
        if (arr[vy][vx]=='#') continue; // 壁の時は何もしない
        if (arr[vy][vx]=='*') continue; // もう訪れたマスは何もしない
        q.push({{vy,vx},count});
        arr[vy][vx]='*';
      }
    }
  }
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      cout << arr[i][j];
    }
    cout << endl;
  }
}