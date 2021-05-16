#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s; cin >> s;
  int ans = 0;
  for (int i = 0; i < 10000; i++) {
    vector<int> a(10);
    int num = i;
    for (int j = 0; j < 4; j++) {
      int p = num % 10;
      a[p] = 1;
      num /= 10;
    }
    bool ok = true;
    for (int j = 0; j < 10; j++) {
      if (s[j] == 'o' && a[j] != 1) ok = false;
      if (s[j] == 'x' && a[j] != 0) ok = false;
    }

    if (ok) ans++;
  }

  cout << ans << endl;
  return 0;
}