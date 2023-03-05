#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n,m;
  cin >> n; // 入力される座標の数
  m = 5; // ますの数

  vector<vector<int>>arr(m+1, vector<int>(m+1));
  for(int i=0; i<n; i++){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    arr[a-1][b-1] += 1;
    arr[a-1][d] -= 1;
    arr[c][b-1] -= 1;
    arr[c][d] += 1;
  }

  vector<vector<int>>sum(m+2, vector<int>(m+2));
  int max = INT_MIN;
  for(int i=0; i<m+1; i++){
    for(int j=0; j<m+1; j++){
      sum[i+1][j+1] = sum[i+1][j] + sum[i][j+1] - sum[i][j] + arr[i][j];
      if (max < sum[i+1][j+1]){
        max = sum[i+1][j+1];
      }
    }
  }
  cout << max << endl;
}