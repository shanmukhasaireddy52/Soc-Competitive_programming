#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main(){
 int n;cin>>n;
 int t;cin>>t;
 char a[n];
 for(int j=0;j<n;j++){
    cin>>a[j];
 }
 while(t--){
    for(int j=1;j<n;j++){
        if(a[j]=='G'&& a[j-1]=='B'){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j++;
        }
    }
 }
 for(int h=0;h<n;h++){cout<<a[h];}
}