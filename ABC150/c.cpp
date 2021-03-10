#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n; cin >> n;

  vector<int> p(n), q(n);
  rep(i, n) cin >> p[i];
  rep(i, n) cin >> q[i];

  vector<int> v(n);
  rep(i, n) v[i] = i+1;

  int a, b;

  int cnt = 0;
  do {
    bool p_flg = true;
    bool q_flg = true;
    rep(i, n) {
      if (v[i] != p[i]) p_flg = false;
      if (v[i] != q[i]) q_flg = false;
    }
  if (p_flg) a = cnt;
  if (q_flg) b = cnt;
  cnt++;
  } while (next_permutation(v.begin(), v.end()));

  cout << abs(a - b) << endl;
  return 0;
}