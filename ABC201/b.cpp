#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  vector<pair<int, string>> vec;
  for (int i = 0; i < n; i++) {
    string s;
    int t;
    cin >> s >> t;
    vec.push_back(make_pair(t, s));
  }

  sort(vec.begin(), vec.end(), greater<pair<int, string>>());

  cout << vec[1].second << endl;
  return 0;
}