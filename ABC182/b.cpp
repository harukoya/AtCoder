#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int ans = 0;
  int max_cnt = 0;
  for (int i = 2; i <= 1000; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (v[j]%i == 0) {
        cnt++;
      }
    }
    if (max_cnt < cnt) {
      max_cnt = cnt;
      ans = i;
    }
  }

  cout << ans << endl;
  return 0;
}