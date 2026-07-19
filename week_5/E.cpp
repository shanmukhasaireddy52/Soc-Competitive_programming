#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
 int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long>a(n);
        vector<long long>b(n);
        vector<long long>c(n);
        for(int j=0;j<n;j++)cin>>a[j];
        for(int j=0;j<n;j++)cin>>b[j];
        for(int j=0;j<n;j++){
            c[j]=a[j]-b[j];
        }
        long long mx=*max_element(c.begin(),c.end());
        vector<int>ans;
        for(int h=0;h<n;h++){
            if(c[h]==mx)ans.push_back(h+1);
        }
        cout<<ans.size()<<endl;
        for(int g=0;g<ans.size();g++){
            cout<<ans[g]<<" ";
        }
        cout<<endl;
    }}