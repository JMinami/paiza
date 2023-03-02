#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int>a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  int x,y;
  cin >> x >> y;
  int sum,s,t=0;
  for(int i=0; i<n; i++){
    sum += a[i];
    if (i==x){
      s = sum;
    }
    if (i==y){
      t = sum;
    }
  }
  cout << t - s;
}