#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n,k;
  cin >> n;
  vector<int> a(n),b;
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  
  cin >> k;
  for(int i=0; i<n; i++){
    if (a[i] == k){
      b.push_back(i+1);
    }
  }

  for(auto& e: b){
    cout << e << endl;
  }
}