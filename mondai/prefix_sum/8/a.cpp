#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  vector<int> s(n);
  for(int i=0; i<n; i++){
    if (i==0){
      s[i]=a[i];
      continue;
    }
    s[i] = s[i-1]+a[i];
  }

  int max = INT_MIN;
  for(int i=0; i+k<n; i++){
    int value = s[i+k] - s[i];
    if (max < value) {
      max = value;
    }
  }
  cout << max << endl;
}