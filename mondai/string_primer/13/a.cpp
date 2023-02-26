#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
  string s,t;
  cin >> s;
  cin >> t;
  int counter=0;

  for(int i=0; i < s.length(); i++){
    if (t[counter] == s[i]) {
      counter++;
    } else {
      counter = 0;
    }
    if (counter == t.length()) {
      cout << "YES";
      return 0; 
    }
  }
  cout << "NO";
}