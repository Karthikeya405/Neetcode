#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a;
    cin >> a;
    string hours = a.substr(0,2);
    string mins = a.substr(3,2);
    string temp = hours;
    if(hours == "20" || hours == "21") {
        hours[0] -= 2;
        hours[1] += 8;
        cout << hours << ":" << mins << " ";
    }
    else if(hours > "12") {
        hours[0] -= 1;
        hours[1] -= 2;
        cout << hours << ":" << mins << " ";
    }
    else if(hours == "00") {
        cout << 12 << ":" << mins << " ";
    }
    else cout << hours << ":" << mins << " ";
    if(temp >= "12") cout << "PM" << endl;
    else cout << "AM" << endl;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}