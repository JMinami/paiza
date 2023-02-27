#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int a1, a2;
  cin >> a1 >> a2;

  if (a1 > a2){
    cout << a1 << " " << a2 << endl;
    return 0;
  }
  cout << a2 << " " << a1 << endl;
}