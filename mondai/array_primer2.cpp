#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n;
  cin >> n;

  vector<int> nums(n);
  for (auto& number : nums){
    cin >> number;
  }

  for (auto& number: nums) {
    cout << number << endl;
  }
}