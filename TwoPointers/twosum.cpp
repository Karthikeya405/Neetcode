#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int i=0;
    int j = numbers.size()-1;
    int sum;
    while(i<j) {
        sum = numbers[i]+numbers[j];
        if(sum == target) return {i+1,j+1};
        else if(sum > target) j--;
        else i++;
    }
    return {0,0};
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers;
    int target;
    int a;
    for(int i=0; i<n; i++) {
        cin >> a;
        numbers.push_back(a);
    }
    cin >> target;
    vector<int> answer = twoSum(numbers, target);
    cout << answer[0] << " " << answer[1] << "\n";
    return 0;
}