#include <iostream>
#include <vector>

using ll = long long;
using namespace std;

int main() {
  int n; cin >> n;
  vector<ll> a(n);
  vector<ll> b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ans += ((b[i] - a[i] + 1) * (a[i] + b[i])) / 2;
  }

  cout << ans << endl;
  return 0;
}