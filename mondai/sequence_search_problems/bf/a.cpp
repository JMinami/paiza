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
  int min = INT_MAX;
  int max = INT_MIN;
  for(auto& e: a){
    if (min > e){
      min = e;
    }
    if (max < e){
      max = e;
    }
  }
  cout << max << " " << min << endl;
}