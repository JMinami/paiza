#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool hasDot(string s) {
  for(int i=0; i< s.length();i++){
    if (s[i] == '.'){
      return true;
    }
  }
  return false;
}

string depulicateHead0(string s) {
  string res = "";
  bool isHead = true;
  // 先頭の0を全て削除する
  for(int i=0; i<s.length(); i++){
    if (!isHead) {
      res += s[i];
      continue;
    }
    if (s[i] == '0') {
      continue;
    }
    res += s[i];
    isHead = false;
  }
  if (hasDot(res)) {
    res = "0" + res;
  }
  return res;
}

string depulicateDot(string s) {
  string res = "";
  bool alreadyHas = false;
  for(int i=0; i<s.length(); i++){
    if (alreadyHas && s[i] == '.'){
      continue;
    }
    if (s[i] == '.') {
      alreadyHas = true;
    }
    res += s[i];
  }
  return res;
}

int main(){
  string s;
  cin >> s;
  s = depulicateHead0(s);
  s = depulicateDot(s);
  cout << stof(s);
}