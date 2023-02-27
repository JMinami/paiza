#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  int k;
  cin >> k;
  int counter = 0;
  for(auto& e: a){
    if (e == k){
      counter++;
    }
  }
  cout << counter << endl;

}