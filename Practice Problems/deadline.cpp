#include <bits/stdc++.h>
using namespace std;

void solve() {
    double n,d;
    cin >> n >> d;
    bool flag = false;
    if(n >= d) {
        cout << "YES" << "\n";
        return;
    } 
    for(double x=1; x<=n; x++) {
        if(x+ceil(d/(x+1)) <= n) {
            flag = true;
            break;
        }
    }
    if(flag) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}