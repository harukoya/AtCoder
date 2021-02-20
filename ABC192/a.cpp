#include <iostream>
using namespace std;

int main() {
  int coin; cin >> coin;
  int need_coin;
  if (coin % 100 == 0) {
    need_coin = 100;
  } else {
    need_coin = 100 - (coin % 100);
  }

  cout << need_coin << endl;

  return 0;
}