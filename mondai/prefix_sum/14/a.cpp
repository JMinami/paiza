#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  string str;
  cin >> str;
  vector<int> s(str.length());

  for(int i=0; i<str.length(); i++){
    int counter = str[i]=='b' ? 1 : 0;
    if (i==0){
      s[i] += counter;
      continue;
    }
    s[i] = s[i-1] + counter;
  }
  cout << s[7] - s[1] << endl;
}