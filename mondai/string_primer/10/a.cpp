#include <iostream>
#include <vector>
using namespace std;
int main(){
  string s;
  cin >> s;
  int i;
  string c;
  cin >> i >> c;

  cout << s.replace(i-1,i,c);
}