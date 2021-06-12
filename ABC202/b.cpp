#include <iostream>
using namespace std;

int main() {
  string s; cin >> s;
  string ans;
  for (auto i = s.rbegin(); i != s.rend(); i++) {
    if (*i == '6') {
      ans += '9';
    } else if (*i == '9') {
      ans += '6';
    } else {
      ans += *i;
    }
  }

  cout << ans << endl;
  return 0;
}