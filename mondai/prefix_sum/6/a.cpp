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

  vector<int> s(10);
  for(int i=0; i<10; i++){
    if (i == 0){
      s[i] = n[i];
      continue;
    }
    s[i] = s[i-1] + n[i];
  }

  int max = INT_MIN;
  for(int i=0; i+3<10; i++){
    int value = s[i+3]-s[i];
    if (max < value) {
      max = value;
    }
  }
  cout << max;
}