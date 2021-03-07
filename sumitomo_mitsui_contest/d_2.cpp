#include <iostream>
using namespace std;

bool dp[30009][4][1009];
string s; int n;

int main() {
  cin >> n >> s;
  dp[0][0][0] = true;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= 3; j++) {
      for (int k = 0; k < 1000; k++) {
        if (dp[i][j][k] == false) continue;

        dp[i+1][j][k] = true;
        if (j <= 2) {
          dp[i+1][j+1][k*10 + (s[i] - '0')] = true;
        }
      }
    }
  }

  int cnt = 0;
  for (int i = 0; i < 1000; i++) {
    if (dp[n][3][i] == true) cnt++;
  }
  cout << cnt << endl;
  return 0;
}