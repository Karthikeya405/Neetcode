#include<bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    unordered_map<int, unordered_set<int>> rows;
    unordered_map<int, unordered_set<int>> columns;
    unordered_map<int, unordered_set<int>> squares;
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            char cell = board[i][j];
            if(cell == '.') continue;
            else if(rows[i].count(cell) || columns[j].count(cell) || squares[(i/3)*3+(j/3)].count(cell)) return false;
            else {
                rows[i].insert(cell);
                columns[j].insert(cell);
                squares[(i/3)*3+(j/3)].insert(cell);
            }
        }
    }
    return true;
}

int main() {
    vector<vector<char>> board (9);
    char a;
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            cin >> a;
            board[i].push_back(a);
        }
    }
    cout << isValidSudoku(board) << "\n";
    return 0;
}