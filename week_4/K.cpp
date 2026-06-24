#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>

int main() {
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    vector<long long>a(n);
    for(int h=0;h<n;h++)cin>>a[h];
    sort(a.begin(),a.end());
    long long ans=0;
    for(int i=1;i<n;i++){
        ans+=a[i]-a[i-1];

    }
cout<<ans<<endl;
    }
}