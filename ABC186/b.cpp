#include <iostream>
#include <vector>
using namespace std;

int main() {
  int h, w; cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  int min_val = 1000;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
      min_val = min(min_val, a[i][j]);
    }
  }

  int ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      ans += a[i][j] - min_val;
    }
  }
  cout << ans << endl;
  return 0;
}