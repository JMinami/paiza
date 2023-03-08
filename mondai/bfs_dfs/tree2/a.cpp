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
  int n, x;
  cin >> n >> x;
  vector<pair<int,int>> arr(n-1);
  for (int i=0; i<n-1; i++){
    int a,b;
    cin >> a >> b;
    arr[i] = {a,b};
  }
  // 確認済み頂点
  set<int> s;
  // 移動可能な距離が3である頂点
  set<int> ans;
  // 次に訪れる頂点と移動距離
  queue<pair<int,int>> q;
  q.push({x,0});
  s.insert(x);

  while(q.size()>0){
    pair<int,int> tmp = q.front();
    q.pop();
    int count = tmp.second+1;
    for(int i=0; i<n-1; i++){
      int next; // 隣の頂点
      if(arr[i].first==tmp.first) next=arr[i].second;
      if(arr[i].second==tmp.first) next=arr[i].first;
      if (s.find(next) != s.end()) continue; // すでに訪れたか確認
      if (count==3) {
        ans.insert(next);
        continue;
      }
      s.insert(next);
      q.push({next, count});
    }
  }
  for(set<int>::iterator it=ans.begin(); it != ans.end(); it++){
    cout << *it << endl;
  }

}