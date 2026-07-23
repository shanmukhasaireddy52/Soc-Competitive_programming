#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> a(t);
    for (int &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    int q;
    cin >> q;

    while (q--) {
        int k;
        cin >> k;

        cout << upper_bound(a.begin(), a.end(), k) - a.begin() << '\n';
    }
}