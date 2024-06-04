#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> strs) {
    unordered_map<string, vector<string>> ans;
    for(string s: strs) {
        vector<int> count(26,0);
        for(char c: s) {
            count[c-'a'] += 1;
        }
        string key;
        for(int i: count) {
            key += "#"+to_string(i);
        }
        ans[key].push_back(s);
    }
    vector<vector<string>> result;
    for(auto val: ans) {
        result.push_back(val.second);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string s;
    vector<string> strs;
    for(int i=0; i<n; i++) {
        cin >> s;
        strs.push_back(s);
    }

    for(vector<string> i: groupAnagrams(strs)) {
        cout << "[ ";
        for(string s: i) {
            cout << s << " " << ",";
        }
        cout << " ]" << " ";
    }
}