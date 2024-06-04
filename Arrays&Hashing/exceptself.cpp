#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n,1);
    int prod = 1;
    for(int i=0; i<n-1; i++) {
        answer[i] *= prod;
        prod *= nums[i];
    }
    answer[n-1] *= prod;
    prod = 1;
    for(int i=n-1; i>0; i--) {
        answer[i] *= prod;
        prod *= nums[i];
    }
    answer[0] *= prod;
    return answer;
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
    vector<int> answer = productExceptSelf(nums);
    for(int i=0; i<n; i++) {
        cout << answer[i] << " ";
    }
    cout << "\n";
}