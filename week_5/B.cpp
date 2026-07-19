#include<iostream>
using namespace std;
#include<vector>

int main(){
    
 int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<int> forbidden(n + 1, 0);

        for (int i = 0; i < m; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            forbidden[b] = 1;
        }

        int root = -1;
        for (int i = 1; i <= n; i++) {
            if (!forbidden[i]) {
                root = i;
                break;
            }
        }

        for (int i = 1; i <= n; i++) {
            if (i != root)
                cout << root << " " << i << "\n";
        }
    }

    return 0;
}