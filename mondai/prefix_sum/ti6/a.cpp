#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;

  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int right = 0;
  int sum = 0;
  int len = 0;
  for(int left=0; left<n; left++){
    while(right<n && sum+arr[right]<=k){
      sum += arr[right];
      right++;
    }
    if (len < (right-left)) {
      len = (right-left);
    }
    if (right==left) right++;
    else sum -= arr[left];
  }
  cout << len << endl;
}