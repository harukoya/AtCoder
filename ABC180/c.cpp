#include <iostream>
#include <set>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  set<ll> ans;
  for (ll x = 1; x * x <= n; x++) {
    if (n % x != 0) continue;
    ans.insert(x);
    ans.insert(n / x);
  }

  for (ll tmp : ans) cout << tmp << endl;
  return 0;
}