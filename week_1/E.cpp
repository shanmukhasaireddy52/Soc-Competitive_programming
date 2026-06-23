#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main(){
  string p,q;
  cin>>p>>q;
  int a=p.length();
  int b=q.length();

if(a!=b){
        cout<<"NO"<<endl;
        }
else{
    for(int j=0;j<a;j++){
    
    if(p[j]!=q[b-j-1]){
        cout<<"NO";
        break;
    }
    if(j==a-1)cout<<"YES";
    }

  }
}