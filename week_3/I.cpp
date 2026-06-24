#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>
#include<cmath>
 const long long MOD = 1000000007;

long long powmod(long long a, long long b) {
    long long res = 1;

    while (b > 0) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);

        long long sum = 0;
        long long cur = 0;
        long long best = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            sum += a[i];

            cur = max(0LL, cur + a[i]);
            best = max(best, cur);
        }

        long long p = powmod(2, k); // 2^k % MOD

        long long sumMod = ((sum % MOD) + MOD) % MOD;
        long long extra = (best % MOD) * ((p - 1 + MOD) % MOD) % MOD;

        long long ans = (sumMod + extra) % MOD;

        cout << ans << '\n';
    }

    return 0;
}