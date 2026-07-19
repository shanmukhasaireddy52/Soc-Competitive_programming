#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
 int main() {
    int n;
    cin>>n;
    vector<int>deg(n+1,0);
    for(int g=1;g<n;g++){
        int x,y;
        cin>>x>>y;
        deg[x]++;
        deg[y]++;
    }
    bool u=true;
    int c=0;
    int deg2=0;
    vector<int>deg1;
    for(int g=1;g<n+1;g++){
        if(c>1){
            u=false;
            break;
        }
        if(deg[g]==1)deg1.push_back(g);
        if(deg[g]>2){c++;
        deg2=g;}
    }
    if(c>1)u=false;
    if(u){cout<<"Yes"<<endl;
        if(c==0){
            cout<<1<<endl;
            cout<<deg1[0]<<" "<<deg1[1]<<endl;
        }
        else{cout<<deg1.size()<<endl;
            for(int h=0;h<deg1.size();h++){
            cout<<deg2<<" "<<deg1[h]<<endl;
        }}
    }
    else{
        cout<<"No"<<endl;
    }
 }