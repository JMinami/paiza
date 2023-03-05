#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n= 10;
  int t= 15;
  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int sum = 0;
  int res = 0;
  int right = 0;

  for(int left=0; left<n; left++ ){
    while(right<n && sum+arr[right]<=t) {
      sum += arr[right];
      right++;
    }
    res += right - left;
    if (right == left) right++;
    else sum -= arr[left];
  }

  cout << res << endl;

}