#include <iostream>
#include <set>
using namespace std;
using ll = int64_t;

int main() {
  ll n; cin >> n;
  
  set<ll> S;
  for (ll a = 2; a * a <= n; a++) {
    ll x = a * a;
    while (x <= n) {
      S.insert(x);
      x *= a;
    }
  }

  cout << n - S.size() << endl;
  return 0;
}