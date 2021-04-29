#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n, m, t; cin >> n >> m >> t;
  vector<int> a(m);
  vector<int> b(m);

  rep(i, m) cin >> a[i] >> b[i];

  int ans = n;
  bool flg = true;
  rep(i, m) {
    if (flg) {
      ans -= a[i];
      flg = false;
    } else {
      ans -= a[i] - b[i-1];
    }
    if (ans <= 0) break;
    ans += b[i] - a[i];
    if (ans > n) ans = n;
  }

  if (ans - (t-b[m-1]) <= 0) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}