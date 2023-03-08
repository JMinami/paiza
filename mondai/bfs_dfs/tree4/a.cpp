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
  vector<pair<int,int>> arr(n-1);
  for(int i=0; i<n-1; i++){
    int a,b;
    cin >> a >>b;
    arr[i] = {a,b};
  }

  set<int> s; // 訪問済みの頂点
  queue<pair<int,int>> q; // 次訪問する頂点と距離
  q.push({x,0}); // 初期化
  s.insert(x);
  vector<int> ans;

  while(q.size()>0){
    pair<int,int> tmp = q.front();
    q.pop();
    int current = tmp.first;
    int count = tmp.second+1;
    for(int i=0; i<n-1; i++){
      int next;
      if (arr[i].first==current) next=arr[i].second;
      if (arr[i].second==current) next=arr[i].first;
      if (s.find(next) != s.end()) continue;
      if (next==y){
        for(int j=0; j<ans.size(); j++){
          cout << ans[j] << endl;
        }
        cout << next;
        return 0;
      }
      ans.push_back(next);
      s.insert(next);
      q.push({next, count});
    }
  }
}