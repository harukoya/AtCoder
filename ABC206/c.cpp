#include <iostream>
#include <vector>
#include <algorithm>

using ll = long long;
using namespace std;

int main() {
  ll n; cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());
  
  ll ans = (n*(n-1))/2;
  ll cnt = 1;

  for (int i = 0; i < n; i++) {
    if (a[i] != a[i+1]) {
      ans -= (cnt*(cnt-1)) /2;
      cnt = 1;
    } else {
      cnt++;
    }
  }

  cout << ans << endl;
  return 0;
}