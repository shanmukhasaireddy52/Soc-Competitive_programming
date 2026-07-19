#include<iostream>
using namespace std;
#include<vector>
 int main() {
    
    int n, q;
    cin >> n >> q;

    vector<int> pos(51, 0);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (pos[x] == 0)
            pos[x] = i;
    }

    while (q--) {
        int x;
        cin >> x;

        cout << pos[x] << " ";

        int cur = pos[x];

        for (int c = 1; c <= 50; c++) {
            if (pos[c] < cur)
                pos[c]++;
        }

        pos[x] = 1;
    }

    return 0;
}