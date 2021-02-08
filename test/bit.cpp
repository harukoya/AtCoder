#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, W;
  cin >> N >> W;

  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  bool can = false;
  //  bit全探索
  for (int bit = 0; bit < (1 << N); bit++) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
      if (bit & (1 << i)) {
        sum += a[i];
      }
    }
    if (sum == W) can = true;
  }

  if (can) cout << "YES" << endl;
  else cout << "NO" << endl;
}