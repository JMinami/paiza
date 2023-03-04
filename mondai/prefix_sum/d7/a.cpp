#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n,m,q;
  cin >> n >> m >> q;

  vector<vector<int>>arr(n, vector<int>(m));
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++) cin >> arr[i][j];
  }

  vector<vector<int>>op(q, vector<int>(4));
  for(int i=0; i<q; i++){
    for(int j=0; j<4; j++) cin >> op[i][j];
  }

  vector<vector<int>>sum(n+1, vector<int>(m+1));
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      sum[i+1][j+1] = sum[i+1][j] + sum[i][j+1] - sum[i][j] + arr[i][j];
    }
  }
  for(int i=0; i<q; i++){
    int a = op[i][0];
    int b = op[i][1];
    int c = op[i][2];
    int d = op[i][3];
    cout << sum[c+1][d+1] - sum[c+1][b] - sum[a][d+1] + sum[a][b] << endl;
  }
}