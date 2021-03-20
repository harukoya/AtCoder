#include <iostream>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

string to_oct(int i) {
  string s;
  while (i) {
    s = to_string(i%8) + s;
    i /= 8;
  }
  return s;
}

int main() {
  int n; cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    string s_ten = to_string(i);
    string s_eight = to_oct(i);
    if (s_ten.find('7') != -1 || s_eight.find('7') != -1) {
      continue;
    } else {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}