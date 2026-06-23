#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main(){
    int n;cin>>n;
    int c=0;
    for(int j=0;j<n;j++){
      int p,q;
      cin>>p>>q;
      if((q-p)>=2)c++;
    }
    cout<<c;
}