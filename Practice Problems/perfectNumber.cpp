#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sumofdigits(int a) {
    int digit;
    int sum = 0;
    while(a != 0) {
        digit = a%10;
        sum += digit;
        a /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int start = 19;
    int count = 1;
    while(n != count) {
        start ++;
        if(sumofdigits(start) != 10) continue;
        else {
            count++;
            continue;
        }
    }
    cout << start << "\n";
}