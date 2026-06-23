#include<iostream>
using namespace std;
#include<vector>

#include<algorithm>

#include<cmath>

int main() {
    int t;
    cin >> t;
    while(t--) {
       int n;
       cin>>n;
       vector<long long>a(n);
       for(int i=0;i<n;i++)cin>>a[i];
       sort(a.begin(),a.end());
       double sum=1;
       bool s=true;
       for(int j=0;j<n;j++){
         
         if(a[j]<=sum){
          if(j!=0)sum+=a[j];
         }
         else{
            s=false;
            break;
         }
      }
      cout<<(s ? "YES\n":"NO\n");
        }}