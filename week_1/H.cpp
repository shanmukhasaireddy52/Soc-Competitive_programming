#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
 int n;cin>>n;
 int t;cin>>t;
 int best=0;
 int r=0;
 int l=0;
 int sum=0;
vector<int> a(n);
 for(int j=0;j<n;j++){
    cin>>a[j];
 }
for(int h=0;r<n;r++){
   sum+=a[r];
   while(sum>t){
    sum-=a[l];
    l++;
   }
   best=max(best,r-l+1);
}
cout<<best;
}