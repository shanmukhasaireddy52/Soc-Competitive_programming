#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main(){
    int n;cin>>n;
    for(int j=n+1;j<9990;j++){
       int a=j%10;
       int b=(j%100-a)/10;
       int c=(j%1000-j%100)/100;
       int d=(j%10000-j%1000)/1000;
       if(a!=b && a!=c &&a!=d && b!=c && b!=d && c!=d){
        cout<<j;
        break;
       }
    }
}