#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string s;
  cin >> s;
  int res = 0;
  string num, operand = "+";
  for (int i=0; i<s.length(); i++){
    if (s[i] >= '0' && s[i] <= '9') {
      num += s[i];
      continue;
    }
    if (operand == "+") {
      res += stoi(num);
    }
    if (operand == "-"){
      res -= stoi(num);
    }
    num = "";
    operand = s[i];
  }
  if (operand == "+") {
    res += stoi(num);
  }
  if (operand == "-"){
    res -= stoi(num);
  }
  cout << res << endl;
}