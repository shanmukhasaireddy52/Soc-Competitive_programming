#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
int main(){
    int t;cin>>t;
    while(t--){
int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.rbegin(), a.rend());

        long long alice = 0, bob = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { 
                // Alice's turn
                if (a[i] % 2 == 0) alice += a[i];
            } else {
                // Bob's turn
                if (a[i] % 2 == 1) bob += a[i];
            }
        }

        if (alice > bob) cout << "Alice\n";
        else if (bob > alice) cout << "Bob\n";
        else cout << "Tie\n";
    }

    }