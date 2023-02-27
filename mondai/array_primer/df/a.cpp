#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> a;
  for (int i=0; i<n; i++) {
    int tmp;
    cin >> tmp;
    if (tmp >= k){
      a.push_back(tmp);
    }
  }
  for(auto& e: a){
    cout << e << endl;
  }

}