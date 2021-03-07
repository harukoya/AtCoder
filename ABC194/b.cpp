#include <iostream>
using namespace std;

int main() {
  int N; cin >> N;
  int A[N], B[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
  }

  int ans = 1001001001;
  int cost;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) cost = A[i] + B[j];
      else cost = max(A[i], B[j]);
      ans = min(ans, cost);
    }
  }

  cout << ans << endl;
  return 0;
}