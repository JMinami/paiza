#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  vector<int> s(10);
  for(int i=0; i<10; i++){
    int tmp;
    cin >> tmp;
    int counter = 0;
    if (tmp%2==0){
      counter++;
    }
    if (i==0){
      s[i] += counter;
      continue;
    }
    s[i] = s[i-1] + counter;
  }
  cout << s[6] - s[1] << endl;
}