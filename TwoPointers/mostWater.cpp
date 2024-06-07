#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& heights) {
    int l = 0;
    int r = heights.size()-1;
    int capacity = 0;
    int maxvalue = 0;
    while(l<r) {
        capacity = (r-l)*min(heights[l],heights[r]);
        maxvalue = max(maxvalue, capacity);
        if(heights[l] < heights[r]) l++;
        else r--;
    }
    return maxvalue;
}

int main() {
    int n;
    cin >> n;
    vector<int> heights (n);
    for(int i=0; i<n; i++) {
        cin >> heights[i];
    }
    cout << maxArea(heights) << "\n";
    return 0;
}