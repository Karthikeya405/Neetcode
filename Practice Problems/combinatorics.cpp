#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int a,b,c,m;
    cin >> a >> b >> c >> m;
    int maxi = a+b+c-3;
    vector<int> values = {0,a-b-c-1,b-c-a-1,c-a-b-1};
    int mini = *max_element(values.begin(),values.end());
    if(m <= maxi && m >= mini) {
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