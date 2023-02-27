#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int>a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  int k, ele = INT_MAX;
  cin >> k;
  for(int i=0; i<n; i++){
    if (k == a[i] && ele > i+1){
      ele = i+1;
    }
  }
  if (ele == INT_MAX) {
    cout << 0;
    return 0;
  }
  cout << ele << endl;
}