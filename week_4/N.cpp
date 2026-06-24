#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> h(n);

    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int sum = 0;

    for(int i = 0; i < k; i++) {
        sum += h[i];
    }

    int best = sum;
    int ans = 0;

    for(int i = k; i < n; i++) {
        sum = sum - h[i - k] + h[i];

        if(sum < best) {
            best = sum;
            ans = i - k + 1;
        }
    }

    cout << ans + 1 << endl;
}