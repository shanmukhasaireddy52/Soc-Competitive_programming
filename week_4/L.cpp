#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>

int main() {
    long long n;cin>>n;
    long long k;cin>>k;
    if(n%2==0){
        if(k<=n/2){
            cout<<2*k-1;
        }
        else{
            cout<<2*(k-n/2);
        }
    }
    else{
        if(k<=(n+1)/2){
            cout<<2*k-1;
        }
        else{
            cout<<2*(k-(n+1)/2);
        }
    }

}