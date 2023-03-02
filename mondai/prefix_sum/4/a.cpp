#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n,x,y;
  cin >> n >> x >> y;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  
  int s,s1,s2=0;
  for(int i=0; i<n; i++){
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