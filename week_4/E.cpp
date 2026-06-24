#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
#include<set>


   int main() {
    int n;
    cin >> n;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    const int INF = 1e9;

    vector<vector<int>> dp(n + 1, vector<int>(3, INF));

    dp[0][0] = 0;

    for (int i = 1; i <= n; i++) {

        // Rest
        dp[i][0] = 1 + min({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});

        // Contest
        if (a[i] == 1 || a[i] == 3)
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);

        // Gym
        if (a[i] == 2 || a[i] == 3)
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
    }

    cout << min({dp[n][0], dp[n][1], dp[n][2]});
}