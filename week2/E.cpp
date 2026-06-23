#include<iostream>
using namespace std;
#include<vector>
#include<set>
#include<algorithm>

int main(){
int t;cin>>t;


   while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> id(n);
        for(int i = 0; i < n; i++) id[i] = i;

        sort(id.begin(), id.end(), [&](int x, int y) {
            return a[x] < a[y];
        });

        vector<long long> pref(n);
        pref[0] = a[id[0]];

        for(int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + a[id[i]];
        }

        vector<int> ans(n);

        ans[id[n - 1]] = n - 1;

        for(int i = n - 2; i >= 0; i--) {
            if(pref[i] >= a[id[i + 1]]) {
                ans[id[i]] = ans[id[i + 1]];
            } else {
                ans[id[i]] = i;
            }
        }

        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
}