#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;

    vector<pair<int, int>> a(t);

    for (int g = 0; g < t; g++) {
        cin >> a[g].first >> a[g].second;
    }

    int c=1;
    for(int g = 1; g < t-1; g++){
        if(a[g].second<a[g].first-a[g-1].first){
            c++;
            continue;;
        }
        if(a[g].second<a[g+1].first-a[g].first){
            c++;
            a[g].first+=a[g].second;
            continue;
        }
    }
if(t>1)c++;
cout<<c;
}