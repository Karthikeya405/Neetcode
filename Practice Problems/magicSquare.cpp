#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> table(3);
    int input;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin >> input;
            table[i].push_back(input);
        }
    }
    vector<vector<int>> answer = table;
    vector<int> sums(3);
    int max = 0;
    int argmax = 0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            sums[i] += table[i][j];
            if(sums[i] > max) {
                max = sums[i];
                argmax = i;
            }
        }
    }
    for(int i=0; i<3; i++) {
        answer[i][i] = 1+sums[argmax]-sums[i];
    }
    int diagonalsum = answer[1][1]+answer[2][2]+answer[0][0];
    int rowsum = answer[0][0]+answer[0][1]+answer[0][2];
    while(diagonalsum != rowsum){
        for(int i=0; i<3; i++) {
            answer[i][i]+=1;
        }
        diagonalsum = answer[1][1]+answer[2][2]+answer[0][0];
        rowsum = answer[0][0]+answer[0][1]+answer[0][2];
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++){
            cout << answer[i][j] << " ";
        }
        cout << "\n";
    }
}