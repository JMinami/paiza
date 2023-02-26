#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, q;
  cin >> n;
  cin >> q;

  vector<pair<int, char>> an;

  for (int i = 0; i<q; i++){
    int m;
    char c;
    cin >> m >> c;
    an.push_back({m, c});
  }

  char c;
  cin >> c;
  for (int i=0; i<n; i++){
    bool isExist = false;
    for(auto& t:an){
      if (i+1 ==t.first){
        cout << t.second;
        isExist = true;
        break;
      }
    }
    if (isExist) {
      continue;
    }
    cout << c;
  }
}