#include <iostream>
#include <vector>
using namespace std;
int main(){
  string s,t;
  int n;
  cin >> s >> t;
  cin >> n;

  cout << s.substr(0, n) << t << s.substr(n, s.length()-1) << endl;
}