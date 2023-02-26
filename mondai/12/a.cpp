#include <iostream>
#include <vector>
using namespace std;
int main(){
  int x,y,n;
  cin >> x;
  cin >> y;
  cin >> n;

  string s = to_string(x+y);
  cout << s[n-1];
}
