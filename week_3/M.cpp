#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
int main(){
   
int n;cin>>n;
vector<long long>a(n);
for(int h=0;h<n;h++)cin>>a[h];
int best=1;
int cur=0;
int l=0;
for(int r=0;r<n;r++){
    if(l==r){cur++;
             continue;}
    else if(a[r]<=a[r-1]*2){
        cur++;
        best=max(best,cur);
        continue;
    }
    else{l=r;
        r--;
        best=max(best,cur);
        cur=0; }
            
}
cout<<best<<"\n";
    }