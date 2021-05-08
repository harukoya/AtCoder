#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  double d, h;
  cin >> n >> d >> h;
  vector<pair<double, double>> a;
  for (int i = 0; i < n; i++) {
    double di, hi;
    cin >> di >> hi;
    a.push_back(make_pair(hi, di));
  }
  sort(a.rbegin(), a.rend());
  double max_d, max_h;
  double ans = 0.0;
  for (int i = 0; i < n; i++) {
    max_d = a[i].second;
    max_h = a[i].first;
    
    double tmp = (((d-max_d) * max_h) - (max_d * (h-max_h))) / (d-max_d);
    ans = max(ans, tmp);
  }

  printf("%.10f\n", ans);
  return 0;
}