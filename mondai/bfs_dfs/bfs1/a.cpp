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
  int n,m,x;
  cin >> n >> m >> x;
  vector<pair<int,int>>arr(m);
  for(int i=0; i<m; i++){
    int a,b;
    cin >> a >> b;
    arr[i] = {a,b};
  }

  queue<int> q; // 次に訪問する頂点
  set<int> s; // 訪問済みの頂点
  q.push(x);
  s.insert(x);

  while(q.size() > 0) {
    int tmp = q.front();
    q.pop();
    for(int i=0; i<m; i++){
      int next; // 次訪れる頂点
      if(arr[i].first==tmp) next=arr[i].second; 
      if(arr[i].second==tmp) next=arr[i].first; 
      if (s.find(next) != s.end()) continue; // 訪問済み
      q.push(next);
      s.insert(next);
    }
  }
}