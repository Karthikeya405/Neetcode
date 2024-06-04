#include<bits/stdc++.h>
using namespace std;

bool hasDuplicate(vector<int>& nums) {
    unordered_map<int, int> mapping;
    for(int a: nums) {
        if(mapping.find(a) == mapping.end()) {
            mapping[a] = 1;
        } else {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    int a;
    for(int i=0; i<n; i++) {
        cin >> a;
        nums.push_back(a);
    }
    cout << hasDuplicate(nums) << "\n";
}