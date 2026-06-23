#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>
bool check(string &s, int len) {
    int n = s.size();

    int bad1 = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] != s[i % len]) bad1++;
    }

    int bad2 = 0;
    int start = n - len;
    for(int i = 0; i < n; i++) {
        if(s[i] != s[start + (i % len)]) bad2++;
    }

    return bad1 <= 1 || bad2 <= 1;}

int main(){
    int t;cin>>t;
   while(t--) {
        int n;
        string s;
        cin >> n>>s;
vector<int> divisors;

        for(int d = 1; d * d <= n; d++) {
            if(n % d == 0) {
                divisors.push_back(d);
                if(d != n / d) divisors.push_back(n / d);
            }
        }

        sort(divisors.begin(), divisors.end());

      for(int len : divisors) {
            if(check(s, len)) {
                cout << len << '\n';
                break;
            }}

    }
}