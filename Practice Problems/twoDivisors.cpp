#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b) {
    return a*b/__gcd(a,b);
}

void solve() {
    ll a,b;
    cin >> a >> b;
    if(a>b) {
        if(lcm(a,b) == a) cout << lcm(a,b)*(a/b) << endl;
        else cout << lcm(a,b) << endl;
    }
    if(b > a) {
        if(lcm(a,b) == b) cout << lcm(a,b)*(b/a) << endl;
        else cout << lcm(a,b) << endl;
    }
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}