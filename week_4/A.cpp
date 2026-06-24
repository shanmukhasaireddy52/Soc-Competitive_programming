#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
#include<set>
long long count(int n,int mx){
    vector<long long>dp(n+1,0);
    dp[0]=1;
    long long mod=1000000007;
    for(int sum=1;sum<=n;sum++){
        for(int g=1;g<=mx;g++){
            if(sum-g>=0){
            dp[sum]=(dp[sum]+dp[sum-g]+mod)%mod;
        }}
    }
    return dp[n];
}
int main() {
int n,k,d;
long long mod=1000000007;
cin>>n>>k>>d;

int ans=(count(n,k)-count(n,d-1)+mod)%mod;
cout<<ans<<endl;

}