#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string s;
  cin >> s;

  for(int i=0; i<s.length(); i++){
    if (::isdigit(s[i]) == 0){
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}