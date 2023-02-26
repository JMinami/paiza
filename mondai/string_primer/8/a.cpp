#include <iostream>
#include <vector>
using namespace std;
int main(){
  string s;
  int i,j;
  cin >> s;
  cin >> i >> j;
  for(int k =1;k<=s.length();k++){
    if (k >= i && k <= j) {
      cout << s[k-1];
    }
  }
  cout << endl;
}