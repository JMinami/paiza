#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<string, int>>a(n);
  for(int i=0; i<n; i++){
    string s;
    int j;
    cin >> s >> j;
    a[i] = {s, j};
  }
  int min, max = 0;
  cin >> min >> max;
  for(auto& e: a){
    if(min <= e.second && max >= e.second){
      cout << e.first << endl;
    }
  }
}