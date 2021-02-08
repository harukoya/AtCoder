#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> grid(H);
  for (int i = 0; i < H; i++) {
    cin >> grid[i];
  }

  int ans = 0;
  for (int i = 0; i < H-1; i++) {
    for (int j = 0; j < W-1; j++) {
      int cnt = 0;
      if (grid[i][j] == '#') cnt++;
      if (grid[i+1][j] == '#') cnt++;
      if (grid[i][j+1] == '#') cnt++;
      if (grid[i+1][j+1] == '#') cnt++;

      if (cnt % 2 == 1) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}