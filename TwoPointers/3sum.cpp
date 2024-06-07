#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end()); 
    vector<vector<int>> answer;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] > 0) break;
        if(i > 0 && nums[i] == nums[i-1]) continue;
        int a = i+1;
        int b = nums.size()-1;
        while(a<b) {
            int sum = nums[i]+nums[a]+nums[b];
            if(sum > 0) {
                b--;
            }
            else if(sum < 0) {
                a++;
            }else {
                answer.push_back({nums[i],nums[a],nums[b]});
                b--; a++;
                while(a < b && nums[a] == nums[a-1]) a++;
            }
        }
    }
    return answer;
}

int main() {
    int n;
    cin >> n;
    vector<int>nums;
    int a;
    for(int i=0; i<n; i++) {
        cin >> a;
        nums.push_back(a);
    }
    vector<vector<int>> answer = threeSum(nums);
    for(vector<int> b: answer) {
        for(int c: b) {
            cout << c << " ";
        }
        cout << "\n";
    }
    return 0;
}