#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  
  int counter = 0;
  for(int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    if (k == tmp){
      counter++;
    }
  }
  cout << counter;

}