#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
using namespace std;

int my[4]={1,0,-1,0};
int mx[4]={0,1,0,-1};

int main(){
  int n,x;
  cin >> n >> x;
  vector<pair<int,int>>arr(n);
  for(int i=0; i<n-1; i++){
    int a,b;
    cin >> a >> b;
    arr[i] = {a,b};
  }
  vector<int>ans;
  for(int i=0; i<n-1; i++){
    pair<int,int> tmp = arr[i];
    if (tmp.first==x) ans.push_back(tmp.second);
    if (tmp.second==x) ans.push_back(tmp.first);
  }

  sort(ans.begin(), ans.end());
  for(int i=0; i<ans.size(); i++){
    cout << ans[i] << endl;
  }
}