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

  int m,b;
  cin >> m >> b;

  vector<int> arr2;
  for(int i=0; i<n; i++){
    arr2.push_back(arr[i]);
    if (i == m-1){
      arr2.push_back(b);
    }
  }
  for(auto& m: arr2){
    cout << m << endl;
  }
}