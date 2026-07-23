#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int d;
    cin >> d;

    vector<pair<int, int>> a(t);

    for (int g = 0; g < t; g++) {
        cin >> a[g].first >> a[g].second;
    }

    sort(a.begin(), a.end());

    long long s = 0;
    long long best = 0;

    int l = 0, r = 0;

    while (true) {
        if (r == t) {
            while (l < r && a[r - 1].first - a[l].first >= d) {
                s -= a[l].second;
                l++;
            }

            best = max(best, s);
            break;
        }

        if (a[r].first - a[l].first >= d) {
            best = max(best, s);
            s -= a[l].second;
            l++;
        } else {
            s += a[r].second;
            r++;
        }
    }

    cout << best;
}