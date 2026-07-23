#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> a(n);
    for (auto &s : a) cin >> s;

    vector<vector<int>> adj(26);
    vector<int> indegree(26, 0);

    // Compare adjacent names
    for (int i = 0; i + 1 < n; i++) {
        string &s = a[i];
        string &t = a[i + 1];

        int len = min(s.size(), t.size());
        int j = 0;

        while (j < len && s[j] == t[j])
            j++;

        if (j == len) {
            // One string is a prefix of the other
            if (s.size() > t.size()) {
                cout << "Impossible\n";
                return 0;
            }
        } else {
            int u = s[j] - 'a';
            int v = t[j] - 'a';

            adj[u].push_back(v);
            indegree[v]++;
        }
    }

    // Topological sort
    queue<int> q;

    for (int i = 0; i < 26; i++) {
        if (indegree[i] == 0)
            q.push(i);
    }

    string ans;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        ans += char('a' + u);

        for (int v : adj[u]) {
            indegree[v]--;

            if (indegree[v] == 0)
                q.push(v);
        }
    }

    if (ans.size() != 26) {
        cout << "Impossible\n";
    } else {
        cout << ans << '\n';
    }

    return 0;
}#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> a(n);
    for (auto &s : a) cin >> s;

    vector<vector<int>> adj(26);
    vector<int> indegree(26, 0);

    // Compare adjacent names
    for (int i = 0; i + 1 < n; i++) {
        string &s = a[i];
        string &t = a[i + 1];

        int len = min(s.size(), t.size());
        int j = 0;

        while (j < len && s[j] == t[j])
            j++;

        if (j == len) {
            // One string is a prefix of the other
            if (s.size() > t.size()) {
                cout << "Impossible\n";
                return 0;
            }
        } else {
            int u = s[j] - 'a';
            int v = t[j] - 'a';

            adj[u].push_back(v);
            indegree[v]++;
        }
    }

    // Topological sort
    queue<int> q;

    for (int i = 0; i < 26; i++) {
        if (indegree[i] == 0)
            q.push(i);
    }

    string ans;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        ans += char('a' + u);

        for (int v : adj[u]) {
            indegree[v]--;

            if (indegree[v] == 0)
                q.push(v);
        }
    }

    if (ans.size() != 26) {
        cout << "Impossible\n";
    } else {
        cout << ans << '\n';
    }

    return 0;
}