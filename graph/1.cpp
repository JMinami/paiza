/*
・ 1 行目に、頂点の個数を表す整数 n と、頂点番号 s が与えられます。
・ 2i 行目には頂点 i に隣接している頂点の個数が与えられ、 
  2i+1 行目には頂点 i に隣接している頂点の番号が半角スペース区切りで与えられます。(1 ≦ i ≦ n)
  3 2
  1
  2
  2
  1 3
  1
  2
頂点 s に隣接している頂点のうち最も番号の大きいものを出力してください。
  [
    [2]
    [1,3]
    [2]
  ]
2
1 3

*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n,s;
  cin >> n >> s;
  cout << n * s;
  vector<vector <int>> nums(n);
  for (int i = 0;i < n*s; i++){
    nums[1];
  }
}