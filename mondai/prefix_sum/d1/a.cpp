#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>>a(n,vector<int>(m));
  for(int i=0; i<n; i++){
    int tmp;
    int j=0;
    while (cin >> tmp){
      a[i][j] = tmp;
      j++;
      if(j >= m){
        break;
      } 
    }
  }
  int sum = 0;
  vector<vector<int>>s(n+1, vector<int>(m+1));
  for (int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      s[i+1][j+1] = s[i][j+1] + s[i+1][j] - s[i][j] + a[i][j];
    }
  }
  cout << s[4][4] - s[4][1] - s[1][4] + s[1][1] ;
}