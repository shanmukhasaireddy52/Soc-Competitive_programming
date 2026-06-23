#include<iostream>
using namespace std;
#include<vector>
#include<set>
#include<algorithm>
#include<map>


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        map<int,int> first, last;

        for(int i = 0; i < n; i++) {
            cin >> a[i];

            if(first.find(a[i]) == first.end()) {
                first[a[i]] = i;
            }

            last[a[i]] = i;
        }

        while(k--) {
            int b, c;
            cin >> b >> c;

            if(first.find(b) == first.end() || first.find(c) == first.end()) {
                cout << "NO\n";
            }
            else if(first[b] <= last[c]) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
}