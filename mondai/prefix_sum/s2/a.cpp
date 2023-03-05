#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n;
  cin >> n;
  int k;
  cin >> k;

  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int right=0;
  int res=0;
  int sum=0;
  for(int left=0; left<n; left++){
    while(right<n && sum+arr[right] <= k){
      sum += arr[right];
      right++;
    }

    res += (right-left);
    if (right==left) right++;
    else sum -= arr[left];
  }
  cout << res << endl;
}