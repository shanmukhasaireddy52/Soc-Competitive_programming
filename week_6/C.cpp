#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
string s;
int ans;

int dfs(int u) {
    int cur = (s[u - 1] == 'B' ? 1 : -1);

    for (int v : adj[u])
        cur += dfs(v);

    if (cur == 0)
        ans++;

    return cur;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        adj.assign(n + 1, {});

        for (int i = 2; i <= n; i++) {
            int p;
            cin >> p;
            adj[p].push_back(i);
        }

        cin >> s;

        ans = 0;
        dfs(1);

        cout << ans << '\n';
    }

    return 0;
}