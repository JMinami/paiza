#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n,m,k;
  cin >> n >> m >> k;

  vector<vector<int>>arr(n+1, vector<int>(m+1));
  for(int i=0; i<k; i++){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    arr[a-1][b-1] += 1;
    arr[a-1][d] -= 1;
    arr[c][b-1] -= 1;
    arr[c][d] += 1;
  }
  vector<vector<int>>sum(n+2, vector<int>(m+2));
  int max = INT_MIN;
  for(int i=0; i<n+1; i++){
    for(int j=0; j<m+1; j++){
      int tmp = sum[i+1][j] + sum[i][j+1] - sum[i][j] + arr[i][j];
      sum[i+1][j+1] = tmp;
      if (max < tmp){
        max = tmp;
      } 
    }
  }
  cout << max << endl;
}