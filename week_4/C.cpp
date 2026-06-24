#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
#include<set>

int main() {
    int n;
    cin >> n;

    const int MAX = 100000;

    vector<long long> earn(MAX + 1, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        earn[x] += x;
    }

    vector<long long> dp(MAX + 1);

    dp[0] = 0;
    dp[1] = earn[1];

    for (int i = 2; i <= MAX; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + earn[i]);
    }

    cout << dp[MAX];
}