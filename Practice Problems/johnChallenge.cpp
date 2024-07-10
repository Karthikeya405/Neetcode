#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m,k;
    cin >> m >> k;
    if(m < k) {
        cout << -1 << endl;
    }
    else if(m == k) {
        for(int i=0; i<m-1; i++) {
            cout << 1 << " ";
        }
        cout << 1 << endl;
    } else if(k >= 2) {
        cout << -1 << endl;
    }
    else if(k == 1 && m >= 3) {
        cout << 3 << " " << 1 << " ";
        for(int i=2; i<m-1; i++) {
            cout << 2 << " ";
        }
        cout << 2 << " " << endl;
    }
    else if(m == 2 && k == 1) {
        cout << 1 << " " << 2 << endl;
    }
    else if(k == 0) {
        if(m == 2) cout << -1 << endl;
        else if(m == 3) {
            cout << 3 << " " << 2 << " " << 1 << endl;
        }
        else {
            cout << 3 << " " << 2 << " " << 1 << " ";
            for(int i=3; i<m-1; i++) {
                cout << 2 << " ";
            }
            cout << 2 << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}