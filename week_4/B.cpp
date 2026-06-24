#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>
 const long long  mod=1000000007;
 const int n=100000;
#include<cmath>
int main(){
    int t,k;
    cin>>t>>k;
    vector<long long>dp(n+1,0);
    vector<long long>pref(n+1,0);
        for(int g=1;g<n+1;g++){
            if(g<k)dp[g]=1;
            else if(g==k)dp[g]=2;
            else dp[g]=(dp[g-1]+dp[g-k]+mod)%mod;  
            pref[g] = (pref[g-1] + dp[g]) % mod;  
        }
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<(pref[b]-pref[a-1]+mod)%mod<<endl;
    }
}