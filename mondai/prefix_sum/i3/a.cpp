#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n;
  int m=10;
  cin >> n;
  vector<int> a(m);

  for(int i=0; i<n; i++){
    int l,r;
    cin >> l >> r;
    a[l-1] += 1;
    a[r] -= 1;
  }

  vector<int> s(m);
  for(int i=0; i<m; i++) {
    if (i == 0){
      s[i] = a[i];
      continue;
    }
    s[i] = s[i-1] + a[i];
  }

  int max = INT_MIN;
  for(int i=0; i<m; i++){
    if (max < s[i]) {
      max = s[i];
    }
  }
  cout << max << endl;
}