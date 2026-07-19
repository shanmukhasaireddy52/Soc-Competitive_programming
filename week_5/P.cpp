#include <bits/stdc++.h>
using namespace std;

const int N = 200005;

vector<int> adj[N];
bool vis[N];
int color[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++)
        cin >> color[i];

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;

        vector<int> comp;
        stack<int> st;
        st.push(i);
        vis[i] = true;

        while (!st.empty()) {
            int u = st.top();
            st.pop();
            comp.push_back(u);

            for (int v : adj[u]) {
                if (!vis[v]) {
                    vis[v] = true;
                    st.push(v);
                }
            }
        }

        unordered_map<int,int> freq;
        int mx = 0;

        for (int x : comp) {
            mx = max(mx, ++freq[color[x]]);
        }

        ans += (int)comp.size() - mx;
    }

    cout << ans << "\n";
}