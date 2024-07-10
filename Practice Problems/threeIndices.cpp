#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int m;
    cin >> m;
    vector<int> arr(m);
    for(int i=0; i<m; i++) cin >> arr[i];
    for(int i=0; i<m-2; i++) {
        if(arr[i] < arr[i+1] && arr[i+1] > arr[i+2]) {
            cout << "YES" << "\n";
            cout << i+1 << " " << i+2 << " " << i+3 << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}