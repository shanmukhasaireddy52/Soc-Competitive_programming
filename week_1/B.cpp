#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main(){
    int n;cin>>n;
    int a=0;
    int b=0;
        for(int j=0;4*j<=n;j++){
        if((n-4*j)%7==0){
          a=j;
          b=(n-4*j)/7;
          break;
        }
    }
for(int j=0;j<a;j++)cout<<"4";
for(int j=0;j<b;j++)cout<<"7";
if(a==0 && b==0)cout<<"-1";
}