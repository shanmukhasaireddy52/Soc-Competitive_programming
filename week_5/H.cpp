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

        vector<int> b(n + 1), pos(n + 1), w(n + 1), dist(n + 1);

        int root = -1;

        for (int i = 1; i <= n; i++) {
            cin >> b[i];
            if (b[i] == i) root = i;
        }

        vector<int> p(n);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        if (p[0] != root) {
            cout << -1 << '\n';
            continue;
        }

        bool ok = true;

        dist[root] = 0;
        w[root] = 0;

        for (int i = 1; i < n; i++) {
            int v = p[i];
            int par = b[v];

            if (pos[par] > pos[v]) {
                ok = false;
                break;
            }

            dist[v] = dist[par] + (pos[v] - pos[par]);
            w[v] = dist[v] - dist[par];
        }

        if (!ok) {
            cout << -1 << '\n';
            continue;
        }

        for (int i = 1; i <= n; i++)
            cout << w[i] << " ";
        cout << '\n';
    }
}