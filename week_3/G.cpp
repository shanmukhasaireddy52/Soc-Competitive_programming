#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>
int checkj(int j,string &s,int m,int n){
int d=j+m;
if (d>=n+1)return n+1;
for(;d>j;d--){
    if(s[d]=='L')return d;
}
return 0;

}
int checks(int j,string &s,int &k,int n){
for(int a=j+1;a<=j+k;a++){
    if(s[a]=='C')return 0;
    if(s[a]=='L'){
        k=j+k-a;
       return a;
    }  
}
 return 0;
}

int main() {
   int t;cin>>t;
    while (t--) {
        int n,m,k;
        cin >> n>>m>>k;

     string s;
     cin>>s;
     s.insert(s.begin(), 'L');
     s+="L";
     string l="NO";
     for(int j=0;j<=n+1;j++){
        if(j==n+1){
            l="YES";
            break;}
         int jump = checkj(j, s, m, n);
   
        if(jump!=0){
            j=jump-1;
            continue;
        }
        if(s[j+m]=='W'){
          int v=checks(j+m,s,k,n);
          if(v!=0){
            j=v-1;
            continue;
          }
        }
        int swim =checks(j,s,k,n);
        if(swim!=0){
            j=swim-1;
            continue;
        }
        break;
     }

   cout<<l<<"\n"; 
}}