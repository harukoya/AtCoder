#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  bool result = true;
  int len = s.size();

  for (int i = 0; i < len; i++) {
    if ((i+1) % 2 == 0) {
      //  偶数番目
      if (!(isupper(s[i]))) {
        result = false;
      }
    } else {
      //  奇数番目
      if (isupper(s[i])) {
        result = false;
      }
    }
  }

  if (result == true) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}