#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>
 int main(){
    int n;cin>>n;
    int s=0;
    while(true){
    if(s*(s+1)/2<=n){
        s++;
    }
    else break;}
    s--;
    vector<int>a(s);
    for(int j=0;j<a.size();j++){
        a[j]=j+1;
    }
    int d=n-(s*(s+1)/2);
    a[s-1]+=d;
    cout<<s<<"\n";
    for(int h=0;h<a.size();h++){
        cout<<a[h]<<" ";
    }
 }