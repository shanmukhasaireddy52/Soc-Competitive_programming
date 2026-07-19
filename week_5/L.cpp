#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
 int main() {
    int n,m;
    cin>>n>>m;
    for(int j=1;j<=n;j++){
        if(j%2==1){
            for(int g=0;g<m;g++)cout<<"#";
            cout<<endl;
            continue;
        }
        else if(j%4==0){
            cout<<"#";
            for(int g=1;g<m;g++)cout<<".";
            cout<<endl;
            continue;
        }
        else{
            for(int g=1;g<m;g++)cout<<".";
            cout<<"#"<<endl;
            continue;
        }
    }
    }