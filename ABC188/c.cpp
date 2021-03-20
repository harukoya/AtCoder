#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n; cin >> n;
  int x = 1 << n;
  vector<pair<int, int>> a(x);
  rep(i, x) {
    int r; cin >> r;
    a[i] = pair<int, int>(r, i+1);
  }

  while (a.size() > 2) {
    vector<pair<int, int>> pa;
    for (int i = 0; i < a.size(); i += 2) {
      pa.push_back(max(a[i], a[i+1]));
    }
    swap(a, pa);
  }
  sort(a.begin(), a.end());
  cout << a[0].second << endl;
  return 0;
}