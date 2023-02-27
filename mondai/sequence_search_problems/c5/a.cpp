#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n,k;
  cin >> n;
  vector<pair<int, int>>a(n);
  for(int i=0; i<n; i++){
    int x,y;
    cin >> x >> y;
    a[i] = {x,y};
  }

  cin >> k;
  int d, counter;
  counter=0;
  for(int i=0; i<n-1; i++){
    d = abs(a[n-1].first - a[i].first) + abs(a[n-1].second - a[i].second);
    if (d >= k){
      counter++;
    }
  }
  cout << counter << endl;
}