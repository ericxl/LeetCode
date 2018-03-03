//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

bool isValidSudoku(vector<vector<char>> &board) {
    int horMap[9][9] = {0};
    int verMap[9][9] = {0};
    int boxMap[9][9] = {0};

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int val = board[i][j] - '0' - 1;
            if (board[i][j] != '.') {
                int k = (i / 3) * 3 + j / 3;
                if (horMap[i][val] != 0 || verMap[j][val] != 0 || boxMap[k][val] != 0) {
                    return false;
                }
                horMap[i][val] = 1;
                verMap[j][val] = 1;
                boxMap[k][val] = 1;
            }


        }
    }

    return true;
}

int main() {

}
