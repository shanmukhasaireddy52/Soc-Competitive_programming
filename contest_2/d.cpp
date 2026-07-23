#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;cin>>t;
   while(t--){
    long long n,k;
    cin>>n>>k;
    long long g=k/(n-1);
    long long f=k%(n-1);
    if(f==0)f=-1;
    cout<<n*g+f<<endl;
   }}
    