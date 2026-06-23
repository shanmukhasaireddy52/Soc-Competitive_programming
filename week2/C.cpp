#include<iostream>
using namespace std;
#include<vector>
#include<set>
#include<algorithm>

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
      
        long long odd = 0, even = 0;

        for(int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
           
            if(i % 2 == 1) odd += x;
            else even += x;
        }
         if(n%2==0){
            if(odd <= even) cout << "YES\n";
            else cout << "NO\n";}
      
         else{cout<<"YES\n";}
   }
}