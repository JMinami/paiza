#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;

int main(){
  int n;
  cin >> n;

  int max = INT_MIN;
  for (int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    if (max < tmp) {
      max = tmp;
    }
  }

  cout << max << endl;
}