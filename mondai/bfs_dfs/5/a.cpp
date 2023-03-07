#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
using namespace std;

int my[4]={1,0,-1,0};
int mx[4]={0,1,0,-1};

int main(){
  int h, w;
  cin >> h >> w;
  int sy, sx;
  cin >> sy >> sx;
  int gy, gx;
  cin >> gy >> gx;

  vector<vector<char>>arr(h, vector<char>(w));
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      cin >> arr[i][j];
    }
  }

  // キューの宣言と初期化
  queue<pair<int,int>>q;
  arr[sy][sx]='*'; // 移動済みを*にする
  q.push({sy,sx});

  while(q.size()>0){
    pair<int,int> tmp = q.front();
    q.pop();
    for(int i=0; i<4; i++){
      int ty = tmp.first + my[i];
      int tx = tmp.second + mx[i];
      if(ty>=0 && ty<h && tx>=0 && tx<w){
        if (arr[ty][tx]=='#') continue;
        if (arr[ty][tx]=='*') continue;
        if (ty==gy && tx==gx) {
          cout << "Yes" << endl;
          return 0;
        }
        arr[ty][tx] = '*'; // 移動済みにする
        q.push({ty, tx});
      }
    }
  }
  cout << "No" << endl;
}