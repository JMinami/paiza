#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int> arr(n);
  for(int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    arr[i] = tmp;
  }

  int x;
  cin >> x;
  arr.push_back(x);
  
  for(auto& e: arr){
    cout << e << endl;
  }
}