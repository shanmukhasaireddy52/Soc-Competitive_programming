#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
#include<set>

    int main() {
    int n, m, c0, d0;
    cin >> n >> m >> c0 >> d0;

    vector<int> dp(n + 1, 0);

    for (int i = 0; i < m; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int cnt = a / b;

        while (cnt--) {
            for (int j = n; j >= c; j--) {
                dp[j] = max(dp[j], dp[j - c] + d);
            }
        }
    }

    for (int j = c0; j <= n; j++) {
        dp[j] = max(dp[j], dp[j - c0] + d0);
    }

    cout << dp[n] << endl;
}