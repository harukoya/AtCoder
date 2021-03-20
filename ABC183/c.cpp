#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  int t[n][n];
  rep(i, n) {
    rep(j, n) {
      cin >> t[i][j];
    }
  }
  vector<int> v;
  for (int i = 1; i < n; i++) {
    v.push_back(i);
  }
  
  int ans = 0;
  do {
    int total = t[0][v[0]];
    rep(i, n-2) total += t[v[i]][v[i+1]];
    total += t[v.back()][0];
    if (total == k) ans++;
  } while (next_permutation(v.begin(), v.end()));

  cout << ans << endl;
  return 0;
}