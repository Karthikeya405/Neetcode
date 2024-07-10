#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s;
    cin >> s;
    int count = 0;
    int open_index;
    int close_index;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='?') count ++;
        if(s[i] == '(') open_index = i;
        if(s[i] == ')') close_index = i;
    }
    if(count%2 == 0) {
        if(open_index >= close_index) {
            if(close_index == 0 || open_index == s.length()-1) {
                cout << "NO" << "\n";
            } else {
                cout << "YES" << "\n";
            }
        } else {
            cout << "YES" << "\n";
        }
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