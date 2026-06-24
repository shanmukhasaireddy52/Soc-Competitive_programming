#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>

int main() {
   int t;cin>>t;
    while (t--) {
        int n;
        cin >> n;

     string s;
     cin>>s;
int c=0;
int ans=0;
        for (int i = 0; i < n-1; i++){
          if(s[i]>s[i+1])c++;
        }
     if(c!=0){
       if(s[n-1]=='1')ans=2*c;
       else ans=2*c-1;}
cout<<ans<<"\n";
        
    }

    return 0;
}