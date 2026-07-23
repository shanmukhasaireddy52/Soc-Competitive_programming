#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
     int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long mn = k * (k + 1) / 2;
        long long mx = k * (2 * n - k + 1) / 2;

        cout << (mn <= x && x <= mx ? "YES" : "NO") << '\n';
    }

    }