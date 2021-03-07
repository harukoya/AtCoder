#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M; cin >> N >> M;
  vector<int> a(N);
  for (int i = M-1; i >= 0; i--) {
    int k;
    cin >> k;
    for (int j = 0; j < k; j++) {
      int s;
      cin >> s;
      s--;    //  1インデックスは使いづらいのでデクリメント
      a[s] |= 1 << i;
    }
  }
  int p = 0;
  for (int i = M-1; i >= 0; i--) {
    int x; cin >> x;
    p |= x << i;    //  pのiビット目にぶち込み
  }

  int ans = 0;
  for (int s = 0; s < (1 << N); s++) {
    int t = 0;    //  どの電球がついているか
    for (int i = 0; i < N; i++) {
      //  iビット目が立っているか
      if (s >> i & 1) {
        t ^= a[i];
      }
    }
    if (t == p) ans++;
  }

  cout << ans << endl;
  return 0;
}