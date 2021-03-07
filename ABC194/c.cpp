#include <iostream>
using namespace std;
using ll = long long;

const int MAXA = 200;
int main() {
  int N; cin >> N;
  int A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int d[2 * MAXA + 1] = {0};
  ll ans = 0;
  for (int i = 0; i < N; i++) {
    /*
    for (int j = i; j < N; j++) {
      if (i == j) continue;
      ans += (A[i] - A[j]) * (A[i] - A[j]);
    }
    */
   for (int aj = -MAXA; aj <= MAXA; aj++) {
     int c = d[MAXA + aj];
     int x = A[i] - aj;
     ans += (ll)x * x * c;
   }
   d[A[i] + MAXA]++;
  }

  cout << ans << endl;
  return 0;
}