#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> problems(n);
        vector<int> topic(n + 1, 0), difficulty(n + 1, 0);

        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;

            problems[i] = {a, b};
            topic[a]++;
            difficulty[b]++;
        }

        long long ans = 1LL * n * (n - 1) * (n - 2) / 6;

        for (auto [a, b] : problems) {
            ans -= 1LL * (topic[a] - 1) * (difficulty[b] - 1);
        }

        cout << ans << '\n';
    }

    return 0;
}