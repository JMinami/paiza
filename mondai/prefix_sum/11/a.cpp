#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int x,y;
  cin >> x >> y;
  vector<int> s(10);
  for (int i=0; i<10; i++){
    int tmp;
    cin >> tmp;
    int counter = tmp%2==0 ? 1 : 0;
    if (i==0){
      s[i] += counter;
      continue;
    }
    s[i] = s[i-1] + counter;
  }
  cout << s[y] - s[x-1] << endl;
}