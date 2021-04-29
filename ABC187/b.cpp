#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  rep(i, n) {
    cin >> x[i];
    cin >> y[i];
  }

  int ans = 0;
  double dx, dy;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      dx = x[j] - x[i];
      dy = y[j] - y[i];
      if (dy/dx >= -1 && dy/dx <= 1) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}