#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, k;
  cin >> n >>k;
  bool isExist = false;
  int eleMin = 0;

  for (int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    if (k == tmp && !isExist){
      eleMin = i+1;
      isExist = true;
    }
  }
  if (!isExist) {
    cout << -1 << endl;
    return 0;
  }
  cout << eleMin << endl;
}