#include<iostream>
using namespace std;
#include<vector>
#include<set>
#include<algorithm>

int main(){
int t;cin>>t;

while(t--){
   int n;cin>>n;
set<long long>s;

for(int j=0;j<n;j++){
   long long x;cin>>x;
   s.insert(x);
}
 vector<long long> v(s.begin(), s.end());

        long long ans = 0;
        long long l = 0;

        for(int r = 0; r < v.size(); r++) {
            while(v[r] - v[l] >= n) {
                l++;
            }

            ans = max(ans, r - l + 1);
        }
cout<<ans<<endl;
}}