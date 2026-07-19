#include<iostream>
using namespace std;
#include<vector>
 int main() {
    
    int n;
    cin >> n;

    vector<vector<int>> child(n + 1);

    for (int i = 2; i <= n; i++) {
        int p;
        cin >> p;
        child[p].push_back(i);
    }

    for (int i = 1; i <= n; i++) {
        if (child[i].empty()) continue; // leaf

        int cnt = 0;
        for (int v : child[i]) {
            if (child[v].empty())
                cnt++;
        }

        if (cnt < 3) {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}