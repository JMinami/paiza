#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>>arr(n, vector<int>(m));

  int a,b,c,d;
  cin >> a >> b >> c >> d;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++) cin >> arr[i][j];
  }

  vector<vector<int>>s(n+1, vector<int>(m+1));
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      s[i+1][j+1] = s[i+1][j] + s[i][j+1] - s[i][j] + arr[i][j];
    }
  }

  cout << s[c+1][d+1] - s[c+1][b] - s[a][d+1] + s[a][b]; 
}