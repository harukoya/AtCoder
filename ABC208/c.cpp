#include <iostream>
#include <vector>
#include <algorithm>

#define rep(i,n) for (int i = 0; i < n; i++)

using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  ll k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  vector<ll> ans(n, k/n);
  k %= n;

  vector<P> p(n);
  rep(i, n) p[i] = P(a[i], i);
  sort(p.begin(), p.end());
  rep(i, k) ans[p[i].second]++;

  rep(i, n) cout << ans[i] << endl;
  return 0;
}