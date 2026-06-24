#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
int main(){
   int t;cin>>t;
 while (t--) {
        int n;
        cin >> n;

        vector<int> freq(n + 2, 0);

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        bool ok = true;

        for (int x = 1; x <= n; x++) {
            if (freq[x] == 1) {
                ok = false;
                break;
            }

            if (freq[x] > 2) {
                freq[x + 1] += freq[x] - 2;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }}