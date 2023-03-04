#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  vector<vector<int>>n(5, vector<int>(5));
  for (int i=0; i<5; i++){
    for (int j=0; j<5; j++) {
      cin >> n[i][j]; 
    }
  } 

  vector<vector<int>>s(6, vector<int>(6));
  for(int i=0; i<5; i++) {
    for (int j=0; j<5; j++){
      s[i+1][j+1] = s[i+1][j] + s[i][j+1] - s[i][j] + n[i][j];
    }
  }
  cout << s[b+1][4] - s[b+1][4-1] - s[a+1-1][4] + s[a][4-1]; 
}