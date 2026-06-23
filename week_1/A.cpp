#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
void chang(string &a,string &b){
    for(int j=0;j<a.length();j++){
       if(a[j]>='a')a[j]=a[j]-32;
        if(b[j]>='a')b[j]=b[j]-32;
    }
return;
}
int main(){
string a,b;
cin>>a;
cin>>b;
chang(a,b);
for(int j=0;j<a.length();j++){
    if(abs(a[j]-b[j])%32==0){
      if(j!=a.length()-1)continue;
      else {cout<<"0";
        break;}
    }
    else if(a[j]<b[j] ){
        cout<<"-1";
        break;
    }
    else{
        cout<<"1";
        break;
    }
}


}