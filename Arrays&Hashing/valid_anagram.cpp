#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    unordered_map<char, int> mapping;
    int sz = s.length();
    int tz = t.length();
    if(sz != tz) return false;
    for(int i=0; i<sz; i++) {
        if(mapping.find(s[i]) == mapping.end()) {
            mapping[s[i]] = 1;
        } else {
            mapping[s[i]] += 1;
        }
        if(mapping.find(t[i]) == mapping.end()) {
            mapping[t[i]] = -1;
        } else {
            mapping[t[i]] -= 1;
        }
    }
    for(auto a: mapping) {
        if(a.second != 0) return false;
    }
    return true;
}

int main() {
    string s,t;
    cin >> s >> t;
    cout << isAnagram(s,t) << "\n";
}