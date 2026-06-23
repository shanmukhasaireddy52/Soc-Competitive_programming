#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>

#include<cmath>


    long long merge_count(vector<int>& v, int l, int r) {
    if(r - l <= 1) return 0;

    int m = (l + r) / 2;

    long long ans = 0;
    ans += merge_count(v, l, m);
    ans += merge_count(v, m, r);

    vector<int> temp;
    int i = l, j = m;

    while(i < m && j < r) {
        if(v[i] < v[j]) {
            temp.push_back(v[i]);
            i++;
        }
        else {
            ans += m - i;
            temp.push_back(v[j]);
            j++;
        }
    }

    while(i < m) temp.push_back(v[i++]);
    while(j < r) temp.push_back(v[j++]);

    for(int k = l; k < r; k++) {
        v[k] = temp[k - l];
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<pair<int,int>> people(n);

        for(int i = 0; i < n; i++) {
            cin >> people[i].first >> people[i].second;
        }

        sort(people.begin(), people.end());

        vector<int> b;

        for(auto p : people) {
            b.push_back(p.second);
        }

        cout << merge_count(b, 0, n) << '\n';
    }
}