#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
int a1,a2,a3,a4;
cin>>a1>>a2>>a3>>a4;
if(a1!=a4){
   cout<<0;
   return 0;
}
else if(a1==0 && a3!=0){
    cout<<0;
   return 0;
}
else cout<<1;
}
