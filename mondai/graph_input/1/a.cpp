#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<pair<int, int>>arr(m);
  for(int i=0; i<m; i++){
    int a,b;
    cin >> a >> b;
    arr[i] = {a, b};
  }

  vector<vector<int>>res(n, vector<int>(n));
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i ==j) {res[i][j] = 0; continue;}
      for(int k=0; k<m; k++){
        if ((arr[k].first == i+1 && arr[k].second == j+1) ||
          (arr[k].first == j+1 && arr[k].second == i+1)) {
          res[i][j] = 1;
          break;
        }
      }
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout << res[i][j];
      if (j == n-1) cout << endl;
    }
  }
}