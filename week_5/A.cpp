#include<iostream>
using namespace std;
#include<vector>
int main() {
  

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> deg(n + 1, 0);

        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            deg[u]++;
            deg[v]++;
        }

        int leaves = 0;
        for (int i = 1; i <= n; i++)
            if (deg[i] == 1)
                leaves++;

        cout << (leaves + 1) / 2 << '\n';
    }

    return 0;
}