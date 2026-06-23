#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
int t;cin>>t;
int d;cin>>d;
vector<int> a(t);
for(int j=0;j<t;j++){
   cin>>a[j];
}
int s=0;
sort(a.rbegin(),a.rend());
bool limit =true;
for(int g=0;g<t && limit;g++){
   if(a[g]>d){
      s++;
      continue;
   }
   for(int f=1;f<=t;f++){
      if(f*a[g]>d && g+f<=t){
         s++;
         t=t-f+1;
         break;
      }
     if (g+f>t){
      limit=false;
     }
   }

}
cout<<s;
}