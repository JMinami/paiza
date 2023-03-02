#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  vector<int>n(10);
  for(int i=0; i<10; i++){
    cin >> n.at(i);
  }

  int s1, s2 = 0;
  int s = 0;
  for(int i=0; i<10; i++){
    s += n[i];
    if (i == 1){
      s1 = s;
    } 
    if (i == 7){
      s2 = s;
    }
  }
  cout << s2 - s1;
}