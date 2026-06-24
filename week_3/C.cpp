#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>


int main(){
    int t;cin>>t;
   while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if(n%2==0){
            int mx=*max_element(a.begin(),a.end());
            cout<<mx+n/2<<endl;
        }
        else{
            int m1=a[n-1];
            int m2=0;

            for(int i=0;i<n-1;i=i+2){
                if(a[i]>m1)m1=a[i];
                 if(a[i+1]>m2)m2=a[i+1];
            }
            int ans=max(m1+n/2+1,m2+n/2);
            cout<<ans<<endl;
        }
    }
}