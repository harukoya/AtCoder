#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//  numを各桁ずつ取り出して配列に格納
//  sortして大きい順の数と小さい順の数を作る
//  その二つの数字の差を返す
int func(int num) {
  vector<int> A;
  while (num) {
    A.push_back(num % 10);
    num /= 10;
  }

  int g1 = 0;
  //  大きい順に並び替え
  sort(A.begin(), A.end(), greater<int>{}); 
  int i = 1;
  for (auto itr = A.rbegin(); itr != A.rend(); ++itr) {
    g1 = g1 + (*itr * i);
    i *= 10;
  }

  int g2 = 0;
  //  小さい順に並び変え
  sort(A.begin(), A.end()); 
  i = 1;
  for (auto itr = A.rbegin(); itr != A.rend(); ++itr) {
    g2 = g2 + (*itr * i);
    i *= 10;
  }

  return g1 - g2;
}

int main() {
  int num; cin >> num;
  int count; cin >> count;

  for (int i = 0; i < count; i++) {
    num = func(num);
  }

  cout << num << endl;
  return 0;
}