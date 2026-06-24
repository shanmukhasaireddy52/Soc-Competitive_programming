#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>


int main(){
    int t;cin>>t;
   while (t--) {
        int n;
        cin >> n;

        vector<char> a(n);
        int c=0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];}
              for (int i = 1; i < n; i++){
                if(a[i]=='@')c++;
                if(a[i]=='*'&&a[i-1]=='*')break;
            }
        
        cout<<c<<endl;
    }}