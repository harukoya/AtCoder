#include <iostream>
#include <string>
#include <set>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n; cin >> n;
  string s[n];
  set<string> set_string;
  rep(i, n) {
    cin >> s[i];
    set_string.insert(s[i]);
  }

  rep(i, n) {
    if (set_string.count('!' + s[i])) {
      cout << s[i] << endl;
      return 0;
    }
  }
  cout << "satisfiable" << endl;
  return 0;
}