#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n <= 28) {
        cout << "aa" << (char)('a'+n-3) << endl;
    }
    else if(n > 28 && n <= 53) {
        cout << 'a' << (char)('a'+n-28) << 'z' << endl;
    } else {
        cout << (char)('a'+n-53) << "zz" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}