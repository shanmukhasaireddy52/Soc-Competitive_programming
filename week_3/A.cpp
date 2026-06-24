#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>


int main(){
    int t;cin>>t;
   while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mn = min_element(a.begin(), a.end()) - a.begin();
        int mx = max_element(a.begin(), a.end()) - a.begin();

        int l = min(mn, mx);
        int r = max(mn, mx);

        int ans = min({
            r + 1,
            n - l,
            l + 1 + n - r
        });

        cout << ans << endl;
    }
}