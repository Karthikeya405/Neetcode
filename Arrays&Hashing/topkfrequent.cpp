#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int>& p1, pair<int, int>& p2) {
    return p1.second > p2.second;
}

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> ans;
    for(int i: nums) {
        if(ans.find(i) == ans.end()) ans[i] = 1;
        else ans[i] += 1;
    }

    vector<pair<int, int>> sorted;
    for(auto& it: ans) {
        sorted.push_back(it);
    }
    sort(sorted.begin(), sorted.end(), comp);
    vector<int> answer;
    for(int i=0; i<k; i++) {
        answer.push_back(sorted[i].first);
    }
    return answer;
}

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> nums;
    int a;
    for(int i=0; i<n; i++) {
        cin >> a;
        nums.push_back(a);
    }
    vector<int> answer = topKFrequent(nums,k);
    for(int i=0; i<answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << "\n";
    return 0;
}