#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
#include <set>
using namespace std;

int my[4]={-1,0,1,0};
int mx[4]={0,1,0,-1};

int h,w,y,x;
int ans[7][7];
int outs[7][7];
void dfs(int,int,int);

int main(){
  cin >> h >> w >> y >> x;
  dfs(y,x,0);
}

void dfs(int y,int x,int count){
  if (count==3){
    cout << y << " " << x << endl;
    outs[y][x]=1;
    return;
  }
  ans[y][x] = 1;
  count++;
  for(int i=0; i<4; i++){
    int ny = y+my[i];
    int nx = x+mx[i];
    // マスの範囲内か判定
    if (ny>=0 && ny<h && nx>=0 && nx<w) {
      dfs(ny, nx, count);
    }
  }
}