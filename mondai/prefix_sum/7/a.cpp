#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  vector<int> s(n);
  for (int i=0; i<n; i++){
    if (i == 0){
      s[i] = a[i];
      continue;
    }
    s[i] = s[i-1] + a[i];
  }

  int max = INT_MIN;
  for (int i=0; i+3<10; i++){
    int value = s[i+3] - s[i];
    if (max < value){
      max = value;
    }
  }
  cout << max << endl;
}