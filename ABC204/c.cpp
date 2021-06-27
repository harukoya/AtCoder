#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX_N = 2010;

vector<vector<int>> G;
vector<int> dist(MAX_N);

void bfs(int s) {
  queue<int> que;
  dist[s] = 0;
  que.push(s);

  while (!que.empty()) {
    int v = que.front();
    que.pop();

    for (int nv : G[v]) {
      if (dist[nv] != -1) continue;

      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }
}

int main() {
  int n, m; cin >> n >> m;
  G.resize(n);
  for (int i = 0; i < m; i++) {
    int a, b; cin >> a >> b;
    G[a-1].push_back(b-1);
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) dist[j] = -1;
    bfs(i);
    for (int j = 0; j < n; j++) {
      if (dist[j] != -1) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}