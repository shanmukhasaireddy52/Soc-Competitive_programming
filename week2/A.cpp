#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>a(2*n);
for(int j=0;j<2*n;j++){
   cin>>a[j];
}
sort(a.begin(),a.end());
int s=0;
for(int l=1;l<n;l++){
   s+=a[l]-a[l-1]+a[l+n]-a[l+n-1];
}
cout<<s<<endl;
for(int h=0;h<n;h++){
   cout<<a[h]<<" "<<a[h+n]<<endl;
}

}}
