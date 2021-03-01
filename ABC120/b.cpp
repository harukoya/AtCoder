#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 100;
int main() {
  int a, b, k; cin >> a >> b >> k;

  int loop = min(a, b);
  int i = 1;
  vector<int> vec;
  while (i <= loop) {
    if (a % i == 0 && b % i == 0) vec.push_back(i);
    i++;
  }

  sort(vec.begin(), vec.end(), greater<int>());

  cout << vec[k - 1] << endl;

  return 0;
}