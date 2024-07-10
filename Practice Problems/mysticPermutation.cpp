#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int m;
    cin >> m;
    vector<int> arr(m);
    vector<int> sorted(m);
    for(int i=0; i<m; i++) {
        cin >> arr[i];
        sorted[i] = arr[i];
    }
    if(m == 1) {
        cout << -1 << "\n";
        return;
    }
    sort(sorted.begin(), sorted.end());
    for(int i=0; i<m-1; i++) {
        if(sorted[i] == arr[i]) swap(sorted[i],sorted[i+1]);
    }
    if(sorted[m-1] == arr[m-1]) swap(sorted[m-1],sorted[m-2]);
    for(int i=0; i<m; i++) cout << sorted[i] << " ";
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}