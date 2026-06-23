#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main(){
 int n;cin>>n;
 char a[n];
 int c=0;
 for(int j=0;j<n;j++){
    cin>>a[j];
    if(j>0){
        if(a[j]==a[j-1])c++;
    }
 }
 cout<<c;
}