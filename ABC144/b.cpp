#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;

  bool can = false;
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      if (i * j == n) can = true;
    }
  }

  if (can) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}