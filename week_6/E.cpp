#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<vector<int>> child(n);
        vector<int> parent(n);

        for (int i = 1; i < n; i++) {
            cin >> parent[i];
            --parent[i];
            child[parent[i]].push_back(i);
        }

        vector<int> height(n, 0);
        vector<long long> dp(n, 0);

        // Since parent[i] < i, process from n-1 down to 0.
        for (int v = n - 1; v >= 0; v--) {
            int mx1 = -1, mx2 = -1;

            for (int u : child[v]) {
                dp[v] += dp[u];

                if (height[u] > mx1) {
                    mx2 = mx1;
                    mx1 = height[u];
                } else if (height[u] > mx2) {
                    mx2 = height[u];
                }
            }

            dp[v] += mx2 + 2;
            height[v] = mx1 + 1;
        }

        cout << dp[0] << '\n';
    }
}