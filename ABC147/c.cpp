#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int main() {
  int N; cin >> N;
  int filter = 0;
  for (int i = 0; i < N; i++) {
    filter += (1<<i);
    //cout << "filter：" << filter << endl;
    //cout << "filter[bit]：" << bitset<3>(filter) << endl;
  }

  int A[N];
  int cnt;
  for (int i = 0; i < N; i++) {
    cin >> cnt;
    int tmpbit = 0;
    for (int j = 0; j < cnt; j++) {
      int x, y; cin >> x >> y;
      if (y == 1) {
        tmpbit |= x & filter;
      } else {
        tmpbit |= x ^ filter;
      }
      cout << "tmp：" << bitset<16>(tmpbit) << endl;
    }
    A[i] = tmpbit;
    cout << i << "番目；" << bitset<16>(tmpbit) << endl;
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    ans ^= A[i];
  }

  cout << bitset<16>(ans) << endl;
  cout << bitset<16>(ans).count() << endl;
  return 0;
}