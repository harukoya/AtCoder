#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m), b(m);
  rep(i, m) cin >> a[i] >> b[i];
  int k;
  cin >> k;
  vector<int> c(k), d(k);
  rep(i, k) cin >> c[i] >> d[i];
  int ans = 0;
  for (int bit = 0; bit < (1<<k); bit++) {
    set<int> dish;
    int tmp_ans = 0;
    for (int i = 0; i < k; i++) {
      if (bit >> i & 1) {
        dish.insert(d[i]);
      } else {
        dish.insert(c[i]);
      }
    }

    rep(i, m) {
      auto find_a = dish.find(a[i]);
      auto find_b = dish.find(b[i]);
      if (find_a != dish.end() && find_b != dish.end()) {
        tmp_ans++;
      }
    }
    ans = max(ans, tmp_ans);
  }
  cout << ans << endl;
  return 0;
}