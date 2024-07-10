#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k,q;
    cin >> k >> q;
    vector<int> a(k);
    vector<int> ns(q);
    for(int i=0; i<k; i++) cin >> a[i];
    for(int i=0; i<q; i++) cin >> ns[i];
    for(int i=0; i<q; i++) {
        if(ns[i] >= a[0]) {
            ns[i] = a[0]-1;
        }
        cout << ns[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}