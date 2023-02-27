#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  
  for(int i=1; i<n; i++){
    int tmp = a[i];
    int j= i;
    while(j>=0 && a[j]>tmp){
      
    }
  }
}