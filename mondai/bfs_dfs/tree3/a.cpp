#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
#include <set>
using namespace std;

int my[4]={1,0,-1,0};
int mx[4]={0,1,0,-1};

int main(){
  int n,x,y;
  cin >> n >> x >> y;
  vector<pair<int,int>>arr(n-1);
  for(int i=0; i<n-1; i++){
    int a,b;
    cin >> a >> b;
    arr[i] = {a,b};
  }
  // 移動済み頂点
  set<int> s;
  // これから訪れる頂点と移動距離
  queue<pair<int,int>>q;
  q.push({x,0});
  s.insert(x);

  while(q.size()>0){
    pair<int,int> tmp = q.front();
    q.pop();
    int currentV = tmp.first;
    int count=tmp.second+1;
    for(int i=0; i<n-1; i++){
      int next; // 隣接頂点
      if (arr[i].first==currentV) next=arr[i].second;
      if (arr[i].second==currentV) next=arr[i].first;
      if(next==y) {
        cout << count << endl;
        return 0;
      }
      if(s.find(next) != s.end()) continue; // 移動ぞみの場合はなにもしない
      q.push({next,count});
      s.insert(next);
    }
  }
}