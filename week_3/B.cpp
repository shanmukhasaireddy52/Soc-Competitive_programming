#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>

int main() {
   int t;cin>>t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];
int ans=0;

        for (int i = 0; i < n-1; i++) {
            if(a[i]>a[i+1]){
                ans++;
                i=i+1;
            }
        }
cout<<ans<<"\n";
        
    }

    return 0;
}