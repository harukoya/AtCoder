#include <iostream>
#include <vector>
#include <map>

#define rep(i,n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
  int n, k; cin >> n >> k;
  vector<int> c(n);
  rep(i, n) cin >> c[i];

  int ans = 0;
  map<int, int> mp;
  int cnt = 0;
  rep(i, n) {
    if (mp[c[i]] == 0) {
      cnt++;
    }
    mp[c[i]]++;
    if (i >= k) {
      mp[c[i-k]]--;
      if (mp[c[i-k]] == 0) {
        cnt--;
      }
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}