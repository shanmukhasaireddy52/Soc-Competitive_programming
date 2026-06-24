#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
#include<set>


   int main() {
    int n;
    cin >> n;

    vector<long long> cost(n);
    for (int i = 0; i < n; i++)
        cin >> cost[i];

    vector<string> s(n), rev(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        rev[i] = s[i];
        reverse(rev[i].begin(), rev[i].end());
    }

    const long long INF = 1e18;

    vector<vector<long long>> dp(n, vector<long long>(2, INF));

    // Base case
    dp[0][0] = 0;
    dp[0][1] = cost[0];

    for (int i = 1; i < n; i++) {

        // Previous original -> Current original
        if (s[i] >= s[i - 1])
            dp[i][0] = min(dp[i][0], dp[i - 1][0]);

        // Previous reversed -> Current original
        if (s[i] >= rev[i - 1])
            dp[i][0] = min(dp[i][0], dp[i - 1][1]);

        // Previous original -> Current reversed
        if (rev[i] >= s[i - 1])
            dp[i][1] = min(dp[i][1], dp[i - 1][0] + cost[i]);

        // Previous reversed -> Current reversed
        if (rev[i] >= rev[i - 1])
            dp[i][1] = min(dp[i][1], dp[i - 1][1] + cost[i]);
    }

    long long ans = min(dp[n - 1][0], dp[n - 1][1]);

    if (ans == INF)
        cout << -1;
    else
        cout << ans;
}