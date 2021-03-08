#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int g[15][15];

int main() {
  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      g[i][j] = -1;
    }
  }

  for (int i = 0; i < n; i++) {
    int m; cin >> m;
    for (int j = 0; j < m; j++) {
      int a, x; cin >> a >> x;
      --a;
      g[i][a] = x;
    }
  }

  int ans = 0;
  for (int i = 0; i < (1<<n); i++) {
    vector<int> d(n);
    for (int j = 0; j < n; j++) {
      if (i & (1<<j)) {
        d[j] = 1;
      }
    }
    bool ok = true;
    for (int j = 0; j < n; j++) {
      if (d[j]) {
        for (int k = 0; k < n; k++) {
          if (g[j][k] == -1) continue;
          if (g[j][k] != d[k]) ok = false;
        }
      }
    }
    if (ok) ans = max(ans, __builtin_popcount(i));
  }
  cout << ans << endl;
  return 0;
}