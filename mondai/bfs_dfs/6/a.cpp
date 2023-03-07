#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
using namespace std;

int my[4]={1,0,-1,0};
int mx[4]={0,1,0,-1};

int main(){
  int h,w;
  cin >> h >> w;
  int sy,sx;
  cin >> sy >> sx;
  int gy,gx;
  cin >> gy >> gx;

  vector<vector<char>> arr(h, vector<char>(w));
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++) cin >> arr[i][j];
  }

  queue<pair<pair<int,int>,int>> q;
  arr[sy][sx] = '*';
  q.push({{sy,sx},0});

  while(q.size()>0){
    pair<pair<int,int>,int> tmp=q.front();
    q.pop();
    for(int i=0; i<4; i++){
      int ty = tmp.first.first+my[i];
      int tx = tmp.first.second+mx[i];
      int count = tmp.second+1;
      if (ty>=0 && ty<h && tx>=0 && tx<w){
        if(ty==gy && tx==gx) {
          cout << count << endl;
          return 0;
        }
        if(arr[ty][tx]=='#') continue;
        if(arr[ty][tx]=='*') continue;
        q.push({{ty,tx}, count});
      }
    }
  }
  cout << "No" << endl;
}