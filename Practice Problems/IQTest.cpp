#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countHashes(int row, int column, vector<vector<char>> paper) {
    int count = 0;
    for(int i=row; i < row+2; i++) {
        for(int j=column; j < column+2; j++) {
            if(paper[i][j] == '#') count ++;
        }
    }
    return count;
}

int main() {
    vector<vector<char>> paper;
    char a;
    for(int i=0; i<4; i++) {
        paper.push_back({});
        for(int j=0; j<4; j++) {
            cin >> a;
            paper[i].push_back(a);
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            int count = countHashes(i,j,paper);
            if(count != 2) {
                cout << "YES" << "\n";
                return 0;
            }
        }
    }
    cout << "NO" << "\n";
    return 0;
}