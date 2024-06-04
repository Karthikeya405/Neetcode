#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> nums, int target) {
    unordered_map<int, int> indices;
    for(int i=0; i<nums.size(); i++) {
        if(indices.find(nums[i]) != indices.end()) {
            return {indices[nums[i]], i};
        } else {
            indices[target-nums[i]] = i;
        }
    }
    return {-1, -1};
}

int main() {
    vector<int> nums;
    int target;
    int n;
    cin >> n;
    int a;
    for(int i=0; i<n; i++) {
        cin >> a;
        nums.push_back(a);
    }
    cin >> target;
    vector<int> answer = twoSum(nums, target);
    cout << answer[0] << " " << answer[1] << "\n";
    return 0;
}