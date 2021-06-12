#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> data(n, 0);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) {
    int c; cin >> c;
    c--;
    data[b[c]]++;
  }

  ll ans = 0;
  rep(i, n) {
    ans += data[a[i]];
  }

  cout << ans << endl;
  return 0;
}