#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  vector<vector<int>>arr(n, vector<int>(n));
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++) cin >> arr[i][j];
  }

  vector<vector<int>>s(n+1, vector<int>(n+1));
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++) {
      s[i+1][j+1] = s[i+1][j] + s[i][j+1] - s[i][j] + arr[i][j];
    }
  }
  cout << s[c+1][d+1] - s[c+1][b] - s[a][d+1] + s[a][b];
}