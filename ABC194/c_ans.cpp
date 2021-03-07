#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

const int MaxA = 200;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  //  分布用
  vector<int> d(MaxA*2+1);
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    /*
    for (int j = 0; j < i; j++) {
      int x = a[i]-a[j];
      ans += x*x;
    }
    */
    for (int aj = - MaxA; aj <= MaxA; ++aj) {
      int c = d[MaxA+aj];
      int x = a[i] - aj;
      ans += (ll)x*x*c;
    }
    d[MaxA+a[i]]++;
  }
  cout << ans << endl;
  return 0;
}