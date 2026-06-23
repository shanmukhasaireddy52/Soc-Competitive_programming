#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
int n;cin>>n;
int a[n];
int a0=0;
int a1=0;
int best=0;
for(int j=0;j<n;j++){
cin>>a[j];
if(a[j]==0)a0++;
if(a[j]==1)a1++;
}
for(int h=0;h<n;h++){
   
   for(int k=h;k<n;k++){
      int b1=0;
      int b0=0;
      for(int s=h;s<=k;s++){
        
         if(a[s]==0)b0++;
         if(a[s]==1)b1++;}
      int af=b0+a1-b1;
      best =max(best,af);

   }
}
cout<<best;
}