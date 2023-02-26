#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
char invertcase(char const &c){
  if (::isupper(c)) {
    return ::tolower(c);
  } else {
    return ::toupper(c);
  }
}
int main(){
  string s;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), invertcase);

  cout << s;
}