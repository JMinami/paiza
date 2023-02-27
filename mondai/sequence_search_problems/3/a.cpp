#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n,k;
  cin >> n;

  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  cin >> k;
  int ele = INT_MIN;
  for(int i=0; i<n; i++){
    if (a[i] == k){
      ele = i+1;
    }
  }
  cout << ele << endl;
}