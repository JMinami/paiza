#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n, q;
  cin >> n >> q;

  vector<int> a(n);
  for (int i=0; i<q; i++){
    int l, r;
    cin >> l >> r;

    a[l-1] += 1;
    a[r] -= 1;
  }

  vector<int> s(n);
  int max = INT_MIN;
  for(int i=0; i<n; i++){
    if (i==0){
      s[i] = a[i];
    } else {
      s[i] = s[i-1] + a[i];
    }

    if (max < s[i]){
      max = s[i];
    }
  }
  cout << max << endl;
}