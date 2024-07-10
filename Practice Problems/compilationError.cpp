#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<int> first (n);
    vector<int> second (n-1);
    vector<int> third (n-2);
    for(int i=0; i<n; i++) cin >> first[i];
    for(int i=0; i<n-1; i++) cin >> second[i];
    for(int i=0; i<n-2; i++) cin >> third[i];
    ll sum = 0;
    for(int i=0; i<n-1; i++) {
        sum += first[i];
        sum -= second[i];
    }
    sum += first[n-1];
    cout << sum << " ";
    sum = 0;
    for(int i=0; i<n-2; i++) {
        sum += second[i];
        sum -= third[i];
    }
    sum += second[n-2];
    cout << sum;
    return 0;
}