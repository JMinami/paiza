#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  vector<vector<int>> n(5, vector<int>(5));
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++) cin >> n[i][j];
  }

  vector<vector<int>> s(6, vector<int>(6));
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      s[i+1][j+1] = s[i+1][j] + s[i][j+1] - s[i][j] + n[i][j];
    }
  }

  cout << s[c+1][d+1] - s[c+1][b] - s[a][d+1] + s[a][b];
}