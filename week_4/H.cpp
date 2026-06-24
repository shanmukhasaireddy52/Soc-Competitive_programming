#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>


int main() {
    int n, h, l, r;
    cin >> n >> h >> l >> r;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<vector<int>> dp(n + 1, vector<int>(h, -1));

    dp[0][0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int t = 0; t < h; t++) {
            if (dp[i - 1][t] == -1) continue;

            int t1 = (t + a[i]) % h;
            int t2 = (t + a[i] - 1) % h;

            dp[i][t1] = max(dp[i][t1], dp[i - 1][t] + (l <= t1 && t1 <= r));
            dp[i][t2] = max(dp[i][t2], dp[i - 1][t] + (l <= t2 && t2 <= r));
        }
    }

    int ans = 0;
    for (int t = 0; t < h; t++) {
        ans = max(ans, dp[n][t]);
    }

    cout << ans << endl;
}