#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>

int main() {
    int n;cin>>n;
    int a0=0;
    int a1=0;
    vector<int>b(n);
    for(int h=0;h<n;h++){
        cin>>b[h];
        if(b[h]==0)a0++;
        else a1++;
    }
    int best=0;
    for(int i=0;i<n;i++){
          int c0=0;
            int c1=0;
        for(int j=i;j<n;j++){
           
            if(b[j]==0)c0++;
            else c1++;
            best=max(best,a1-c1+c0);
        }
    }

    cout<<best;
}