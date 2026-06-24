#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
int main(){
    int t;cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<long long>a(n);
        for(int j=0;j<n;j++)cin>>a[j];
       int ans = 0;
long long sum = 0;
int left = 0;

for (int right = 0; right < n; right++) {
    sum += a[right];

    while (sum > r && left <= right) {
        sum -= a[left];
        left++;
    }

    if (sum >= l && sum <= r) {
        ans++;

        // start fresh after this window
        sum = 0;
        left = right + 1;
    }
}
        cout<<ans<<"\n";
    }
    
    }