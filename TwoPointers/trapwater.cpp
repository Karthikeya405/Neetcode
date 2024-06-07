#include<bits/stdc++.h>
using namespace std;

int trap(vector<int> height) {
    int l = 0;
    int r = height.size()-1;
    int lmax = height[l];
    int rmax = height[r];
    int total = 0;
    while(l < r) {
        if(lmax < rmax) {
            l++;
            lmax = max(lmax,height[l]);
            total += lmax-height[l];
        } else {
            r--;
            rmax = max(rmax, height[r]);
            total += rmax-height[r];
        }
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> height(n);
    for(int i=0; i<n; i++) cin >> height[i];
    cout << trap(height) << "\n";
    return 0;
}