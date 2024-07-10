#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m;
    cin >> m;
    string s;
    cin >> s;
    int count = 0;
    for(int i=0; i<m-2; i++) {
        if(s.substr(i,3) == "map") {
            count ++;
        }
        else if(s.substr(i,3) == "pie") {
            if(i >= 2) {
                if(s.substr(i-2, 5) == "mapie") continue;
                else count ++;
            }
            else count ++;
        }
    }
    cout << count << endl;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}