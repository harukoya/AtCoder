#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string s; cin >> s;
  bool rev = false;
  deque<char> q;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'R') rev ^= 1;
    else if (rev == true) q.push_front(s[i]);
    else q.push_back(s[i]);
  }
  if (rev == true) reverse(q.begin(), q.end());
  string ans;
  for (char c : q) {
    if (ans.size() > 0 && ans.back() == c) ans.pop_back();
    else ans.push_back(c);
  }

  cout << ans << endl;
  return 0;
}