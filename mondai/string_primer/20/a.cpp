#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isIn(vector<char> cs, char c){
  for (auto& v:cs){
    if (v == c) {
      return true;
    }
  }
  return false;
}

int main(){
  string s;
  cin >> s;

  vector<char> cs;
  for (int i=0; i<s.length(); i++) {
    if (isIn(cs, s[i])){
      continue;
    }
    cs.push_back(s[i]);
    cout << s[i];
  }
}