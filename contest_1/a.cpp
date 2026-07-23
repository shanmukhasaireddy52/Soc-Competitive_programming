#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cstring>
#include <algorithm>
using namespace std;
const  long long INF = 1e9;
unordered_map<long long, int> dp;

int solve(long long n, long long k) {
    if (n == k) return 0;
    if (n < k) return INF;

    if (dp.count(n)) return dp[n];

    long long l = n / 2;
    long long r = n - l;

    int ans = INF;

    if (k <= l)
        ans = min(ans, 1 + solve(l, k));

    if (k <= r)
        ans = min(ans, 1 + solve(r, k));

    return dp[n] = ans;
}
int main(){
     int t;
    cin >> t;
    while(t--){
        dp.clear();
        long long n,k;
        cin>>n>>k;
        int c=solve(n,k);
        if(c==INF){
            cout<<-1<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
}