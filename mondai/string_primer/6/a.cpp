#include <iostream>
#include <vector>
using namespace std;
int main(){
  string s;
  char c;
  cin >> s;
  cin >> c;

  for(int i=0; i<s.length(); i++) {
    if (s[i] ==c) {
      cout << i+1 << endl;
      break;
    }
  }
}