#include <iostream>
#include <vector>
using ll = long long;
using namespace std;
/*
  mod 200 の世界で考える
  すべてを200で割った余りの数として考える。
*/
int main() {
  int n; cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> cnt(200);
  for (int i = 0; i < n; i++) {
    cnt[a[i] % 200]++;
  }

  ll ans = 0;
  for (int i = 0; i < 200; i++) {
    ans += (ll)cnt[i]*(cnt[i]-1) / 2;
  }

  cout << ans << endl;
  return 0;
}