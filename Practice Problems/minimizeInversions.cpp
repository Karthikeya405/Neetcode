#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m;
    cin >> m;
    vector<pair<int, int>> pairs(m);
    for(int i = 0; i < m; i++) {
        cin >> pairs[i].first;
    }
    for(int i = 0; i < m; i++) {
        cin >> pairs[i].second;
    }

    sort(pairs.begin(), pairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first != b.first) 
            return a.first < b.first;
        return a.second < b.second;
    });

    for(int i = 0; i < m - 1; i++) {
        cout << pairs[i].first << " ";
    }
    cout << pairs[m - 1].first << endl;
    for(int i = 0; i < m - 1; i++) {
        cout << pairs[i].second << " ";
    }
    cout << pairs[m - 1].second << endl;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}
