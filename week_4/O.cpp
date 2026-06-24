#include<iostream>
using namespace std;
#include <string>
#include<vector>
#include<algorithm>

int main() {
    int n;
    cin >> n;
    vector<int> h(n);

    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int sum = 1;
    int best=0;
    for(int i = 0; i <n-1; i++) {
        if(h[i+1]>=h[i])sum++;
        else{ best=max(best,sum);
              sum=1; }
    }
    best=max(best,sum);

   
    

    cout << best << endl;
}