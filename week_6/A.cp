
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 
        int n,t;
        cin >> n>>t;
        vector<long long> a(n);
        int s=1;
        bool h=false;
        for (int i = 0; i < n-1; i++)
            cin >> a[i];
        for(int j=1;j>0;j++){
            if(s==t){h=true;
              break;
            }
            if(s>t)break;
            s+=a[s-1];
        }
        cout<< (h ? "YES" : "NO");
       
    }