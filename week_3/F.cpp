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
     bool istr = all_of(s.begin(),s.end(),[](char c) {
        return c == '?';
    });
    if(!istr){
        for (int i = 0; i < n; i++){
        if(s[i]=='?'){
            continue;
        }
        if(s[i]=='R'){
            for(int j=i-1;j>=0;j--){
                if(i%2==j%2)s[j]='R';
                else s[j]='B';}
                break;}
        else{
            for(int j=i-1;j>=0;j--){
                if(i%2==j%2)s[j]='B';
                else s[j]='R';}
                break;
        }        
        

    }
    for (int i = n-1; i>=0; i--){
        if(s[i]=='?'){
            continue;
        }
        if(s[i]=='R'){
            for(int j=i+1;j<n;j++){
                if(i%2==j%2)s[j]='R';
                else s[j]='B';}
                break;}
        else{
            for(int j=i+1;j<n;j++){
                if(i%2==j%2)s[j]='B';
                else s[j]='R';}
                break;
        }        
    }
    for(int j=0;j<n-1;j++){
        if(s[j+1]=='?'){
            if(s[j]=='B')s[j+1]='R';
            else s[j+1]='B';
        }
    }
    }
else{
    for(int j=0;j<n;j++){
if(j%2==0)s[j]='B';
else s[j]='R';
    }
}    
cout<<s<<"\n";

    
}}