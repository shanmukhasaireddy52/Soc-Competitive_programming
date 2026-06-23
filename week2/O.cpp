#include<iostream>
using namespace std;
#include <string>

#include<algorithm>
int main(){int t;cin>>t;
   while(t--) {
        int n;
        cin >> n;

        string top, bottom;
        cin >> top >> bottom;

        int pos = n - 1;

        for(int i = 0; i < n - 1; i++) {
            if(top[i + 1] == '1' && bottom[i] == '0') {
                pos = i;
                break;
            }
        }

        string ans = "";

        for(int i = 0; i <= pos; i++) ans += top[i];
        for(int i = pos; i < n; i++) ans += bottom[i];

        int cnt = 1;

        for(int i = pos - 1; i >= 0; i--) {
            if(top[i + 1] == bottom[i]) cnt++;
            else break;
        }

        cout << ans << '\n';
        cout << cnt << '\n';
    }
}