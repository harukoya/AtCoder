#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

const int nmax = 8;
bool graph[nmax][nmax];
bool visited[nmax];

int dfs(int u, int n) {
  bool all_visited = true;
  rep(i, n) {
    if (visited[i] == false) {
      all_visited = false;
    }
  }
  if (all_visited) return 1;

  int ret = 0;
  rep(i, n) {
    if (graph[u][i] == false) continue;
    if (visited[i]) continue;

    visited[i] = true;
    ret += dfs(i, n);
    visited[i] = false;
  }
  return ret;
}

int main() {
  int n, m; cin >> n >> m;
  int a, b;
  rep(i, m) {
    cin >> a >> b;
    --a;
    --b;
    graph[a][b] = graph[b][a] = true;
  }

  rep(i, n) visited[i] = false;
  visited[0] = true;
  cout << dfs(0, n) << endl;
  return 0;
}