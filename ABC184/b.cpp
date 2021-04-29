#include <iostream>
#include <string>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n,x; cin >> n >> x;
  string s; cin >> s;
  int ans = x;
  rep(i,n) {
    char result = s[i];
    if (result == 'o') ans++;
    if (result == 'x') {
      if (ans != 0) ans--;
    }
  }

  cout << ans << endl;
  return 0;
}