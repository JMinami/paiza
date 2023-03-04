#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n,x,y;
  cin >> n >> x >> y;
  vector<int> s(n);
  for(int i=0; i<n; i++){
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