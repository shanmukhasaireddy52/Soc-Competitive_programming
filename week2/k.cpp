#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>

int main(){
int t;cin>>t;

while(t--){
   int n;cin>>n;
   long long a[n];
long long mn=0;
long long mx=0;


for(int j=0;j<n;j++){
   int x;cin>>x;
   long long a=mx+x;
   long long b=mn+x;
   mn=min({a,b,llabs(a),llabs(b)});
   mx=max({a,b,llabs(a),llabs(b)});  
}
cout<<mx<<endl;

}}