#include <iostream>
using namespace std;

int main() {
  string s; cin >> s;
  int len = 0;
  int res = 0;
  for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    if (c == 'A' || c == 'C' || c == 'G' || c == 'T') {
      len++;
      res = max(res, len);
    } else {
      len = 0;
    }
  }

  cout << res << endl;
  return 0;
}