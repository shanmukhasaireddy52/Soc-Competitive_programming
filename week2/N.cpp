#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>

#include<cmath>

int main() {
    int t;
    cin >> t;
    while(t--) {
       int n;long long k;
       cin>>n>>k;

       vector<long long>a(n);
       vector<int>b(n);
       map<int,long long>mp;
       for(int i=0;i<n;i++)cin>>a[i];
       for(int i=0;i<n;i++)cin>>b[i];
       for(int j=0;j<n;j++){
         mp[abs(b[j])]+=a[j];
         
        }
        long long  sum=0;
        bool ok=true;
      for(int h=1;h<=n;h++){
         sum+=mp[h];
         if(h*k<sum){
            ok=false;
            break;
         }
      }
      cout<<(ok ? "YES\n" :"NO\n");
      
      }}