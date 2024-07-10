#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    ll answer = 0;
    priority_queue <int> order;
    for(int a: arr) {
        if(a == 0) {
            if(order.empty()) continue;
            else {
                answer += order.top();
                order.pop();
            }
        }
        else {
            order.push(a);
        }
    }
    cout << answer << "\n";
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}