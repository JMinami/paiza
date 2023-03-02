#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int x,y;
  cin >> x >> y;
  vector<int>a(10);
  for(int i=0; i<10; i++){
    cin >> a[i];
  }
  int s=0;
  int s1, s2=0;
  for(int i=0; i<10; i++){
    s += a[i];
    if (i == x-1){
      s1 = s;
    }
    if (i == y){
      s2 = s;
    }
  }
  cout << s2 - s1;
}