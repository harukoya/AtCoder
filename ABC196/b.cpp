#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string x; cin >> x;
  int n = x.size();
  bool flg;
  if (x.find(".") == -1) {
    flg = false;
  } else {
    flg = true;
  }

  vector<int> digit;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (flg == false) {
      digit.push_back(x[n-i-1] - '0');
      cnt++;
    }
    if (x[n-i-1] == '.') flg = false;
  }
  string ans;
  for (int i = cnt - 1; i >= 0; i--) {
    ans += digit[i] + '0';
  }

  cout << ans << endl;
  return 0;
}