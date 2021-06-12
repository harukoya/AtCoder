#include <iostream>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll a, b, k; cin >> a >> b >> k;
  string s;
  rep(i, a) s += 'a';
  rep(i, b) s += 'b';
  ll count = 1;
  string ans;
  do {
    if (count == k) {
      ans = s;
    }
    count++;
  } while (next_permutation(s.begin(), s.end()));

  cout << ans << endl;
  return 0;
}