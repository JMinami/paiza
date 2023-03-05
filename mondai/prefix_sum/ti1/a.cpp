#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n=5;
  int p=2;
  vector<vector<int>>x(n+1, vector<int>(n+1));
  for(int i=0; i<p; i++){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    x[a][b] += 1;
    
    x[c][d] += 1;
    x[a][d] -= 1;
    x[c][b] -= 1;
  }

  vector<vector<int>>s(n+2, vector<int>(n+2));
  int max = INT_MIN;
  for(int i=0; i<n+1; i++){
    for(int j=0; j<n+1; j++){
      s[i+1][j+1] = s[i+1][j] + s[i][j+1] - s[i][j] + x[i][j];
      if (max < s[i+1][j+1]){
        max = s[i+1][j+1];
      }
    }
  }
  cout << max << endl;

}