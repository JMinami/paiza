#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  vector<int> n(10);
  for(int i=0; i<10; i++){
    cin >> n[i];
  }
  int min = INT_MAX;
  int max = INT_MIN;
  for(auto& e: n){
    if (min > e){
      min = e;
    }
    if (max < e){
      max = e;
    }
  }
  cout << max << " " << min << endl;
}