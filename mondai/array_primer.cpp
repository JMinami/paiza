#include<iostream>
#include<vector>
using namespace std;

int main() {
  int in;
  vector<int> numbers;
  while(cin >> in){
    numbers.push_back(in);
  }

  for(int v : numbers) {
    cout << v << endl;
  }
}