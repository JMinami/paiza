#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;

  bool isExist = false;
  for(int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    if (tmp == k) {
      isExist = true;
    }
  }
  
  cout << (isExist ? "YES" : "NO");
}