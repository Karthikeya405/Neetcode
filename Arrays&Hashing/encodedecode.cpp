#include<bits/stdc++.h>
using namespace std;

string encoder(vector<string>& strs) {
    string answer;
    for(string s: strs) {
        answer += to_string(s.size()) + "#" + s;
    }
    return answer;
}

vector<string> decoder(string s) {
    vector<string> answer;
    int i=0;
    while(i < s.size()) {
        int j = i;
        while(s[j] != '#') j++;
        int count = stoi(s.substr(i,j-i));
        string req = s.substr(j+1,count);
        answer.push_back(req);
        i = j+count+1;
    }
    return answer;
}

int main() {
    vector<string> strs;
    int n;
    cin >> n;
    string s;
    for(int i=0; i<n; i++) {
        cin >> s;
        strs.push_back(s);
    }
    string encode = encoder(strs);
    vector<string> answer = decoder(encode);
    for(int i=0; i<answer.size(); i++) {
        cout << answer[i] << " " << "\n";
    }
}