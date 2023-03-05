#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n=5;
  int m=10;
  vector<pair<int, int>>a(n);
  for(int i=0; i<n; i++){
    int l, r;
    cin >> l >> r;
    a[i] = {l, r};
  }

  vector<int> s(m);
  for(int i=0; i<n; i++){
    int l = a[i].first-1;
    int r = a[i].second;
    s[l] += 1;
    s[r] -= 1;
  }

  vector<int> sum(m);
  for(int i=0; i<m; i++){
    if (i==0){
      sum[i] = s[i];
      continue;
    }
    sum[i] = sum[i-1] + s[i];
  }

  int max = INT_MIN;
  for(int i=0; i<m; i++){
    if (max < sum[i]){
      max = sum[i];
    }
  }
  cout << max << endl;
}