#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a1,a2,a3;
    cin >> a1 >> a2 >> a3;
    cout << 4*((a1*a2+a2*a3+a3*a1)/sqrt(a1*a2*a3));
    return 0;
}