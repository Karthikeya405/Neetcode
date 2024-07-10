#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    if(n == 1) {
        cout << 1 << "\n";
        return 0;
    }
    int count = 2;
    int maxi = 2;
    for(int i=0; i<n-2; i++) {
        if(arr[i]+arr[i+1] == arr[i+2]) {
            count++;
            maxi = max(count,maxi);
        }
        else {
            count = 2;
        }
    }
    cout << maxi << "\n";
    return 0;
}