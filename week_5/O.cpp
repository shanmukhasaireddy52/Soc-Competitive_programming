#include <bits/stdc++.h>
using namespace std;

const int N = 105;

vector<int> adj[N];
bool vis[N];
pair<int,int> p[N];

void dfs(int u) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v])
            dfs(v);
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> p[i].first >> p[i].second;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (p[i].first == p[j].first || p[i].second == p[j].second) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    int cc = 0;

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cc++;
            dfs(i);
        }
    }

    cout << cc - 1 << '\n';

    return 0;
}