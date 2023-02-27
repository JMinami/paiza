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
  int x,y;
  cin >> x >> y;

  int tmp;
  tmp = arr[x-1];
  arr[x-1] = arr[y-1];
  arr[y-1] = tmp;

  for (auto& e:arr){
    cout << e << endl;
  }
}