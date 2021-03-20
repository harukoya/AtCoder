#include <iostream>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int m, h; cin >> m >> h;
  bool ans;
  if (h % m == 0) ans = true;
  else ans = false;

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}