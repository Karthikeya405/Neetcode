#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numbers(nums.begin(), nums.end());
    int longest = 0;
    for(int i: nums) {
        if(numbers.find(i-1) == numbers.end()) {
            int length = 1;
            while(numbers.find(length+i) != numbers.end()) length++;
            longest = max(longest, length);
        }
    }
    return longest;
}

int main() {
    int n;
    vector<int> nums;
    int a;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a;
        nums.push_back(a);
    }
    cout << longestConsecutive(nums) << "\n";
    return 0;
}