#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int x, y;
  cin >> x >> y;

  int tmp;
  tmp = x;
  x = y;
  y = tmp;

  cout << x << y;
}