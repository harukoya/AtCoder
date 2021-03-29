#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  vector<string> S(H);
  rep(i, H) {
    cin >> S[i];
  }

  int chkX = X - 1;
  int chkY = Y - 1;

  int ans = 0;
  for (int i = chkX-1; i >= 0; i--) {
    if (S[i][chkY] == '#') break;
    ans++;
  }
  for (int i = chkX+1; i < H; i++) {
    if (S[i][chkY] == '#') break;
    ans++;
  }
  for (int i = chkY-1; i >= 0; i--) {
    if (S[chkX][i] == '#') break;
    ans++;
  }
  for (int i = chkY+1; i < W; i++) {
    if (S[chkX][i] == '#') break;
    ans++;
  }

  cout << ans+1 << endl;
  return 0;
}