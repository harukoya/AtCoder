#include <iostream>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  int cnt = 0;
  for (int i = 0; i < 1000; i++) {
    int c[3] = {i / 100, (i/10) % 10, i % 10};
    int len = 0;
    for (int j = 0; j < n; j++) {
      if (c[len] == s[j] - '0') len++;
      if (len == 3) break;
    }
    if (len == 3) cnt++;
  }

  cout << cnt << endl;
  return 0;
}