#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>

int main(){
int t;cin>>t;

while(t--){
   map<int,int>f;
int n;cin>>n;
for(int h=0;h<n;h++){
   int x;
   cin>>x;
   f[x]++;
}
 long long s=0;
for(auto p :f){
  long long h=p.second;
  s+=(h*(h-1))/2 ;
}
s+=1LL*f[2]*f[1];
cout<<s<<endl;
}
}
