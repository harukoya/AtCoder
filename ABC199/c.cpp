#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

string changeString(string s, int n) {
  string a, b;
  for (int i = 0; i < n; i++) {
    a += s[i];
  }
  for (int i = n; i < 2*n; i++) {
    b += s[i];
  }

  string aft_string = b + a;
  return aft_string;
}

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int q; cin >> q;

  vector<int> t(q);
  vector<int> a(q);
  vector<int> b(q);
  rep(i, q) {
    cin >> t[i] >> a[i] >> b[i];
    a[i]--;
    b[i]--;
  }

  bool flg = false;
  rep(i, q) {
    if (t[i] == 2) {
      if (flg == true) flg = false;
      else flg = true;
    } else {
      string tmp;
      int bef_position = a[i];
      int aft_position = b[i];
      if (flg == true) {
        if (bef_position < n) {
          bef_position += n;
        } else {
          bef_position -= n;
        }
        if (aft_position < n) {
          aft_position += n;
        } else {
          aft_position -= n;
        }
      }
      tmp = s.substr(bef_position, 1);
      s.replace(bef_position, 1, s, aft_position, 1);
      s.replace(aft_position, 1, tmp);
    }
  }

  if (flg == true) s = changeString(s, n);
  cout << s << endl;
  return 0;
}