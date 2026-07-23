#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

vector<vector<int>> child;
string s;
vector<int> dp;

void dfs(int u) {
    int l = child[u][0];
    int r = child[u][1];

    if (l == 0 && r == 0) {
        dp[u] = 0;
        return;
    }

    dp[u] = INF;

    if (l) {
        dfs(l);
        dp[u] = min(dp[u], dp[l] + (s[u - 1] != 'L'));
    }

    if (r) {
        dfs(r);
        dp[u] = min(dp[u], dp[r] + (s[u - 1] != 'R'));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        cin >> s;

        child.assign(n + 1, vector<int>(2));
        dp.assign(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> child[i][0] >> child[i][1];
        }

        dfs(1);

        cout << dp[1] << "\n";
    }

    return 0;
}