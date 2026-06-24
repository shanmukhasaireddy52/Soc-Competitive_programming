#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), suf(n);
        long long moved = 0;

        for (int i = 0; i < n; i++) cin >> a[i];

        int mn = a[n - 1];
        suf[n - 1] = mn;

        for (int i = n - 2; i >= 0; i--) {
            if (a[i] > mn) {
                moved += a[i] - mn;
            }
            mn = min(mn, a[i]);
            suf[i] = mn;
        }

        vector<int> cnt(n + 2, 0);
        int bestLost = 0;

        for (int i = 0; i < n; i++) {
            cnt[suf[i]]++;
            bestLost = max(bestLost, cnt[a[i]]);
        }

        cout << moved + max(0, bestLost - 1) << "\n";
    }
}