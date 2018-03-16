//
// Created by Eric Liang on 3/16/18.
//

#include <leetcode.h>

int countBattleships(vector<vector<char>>& board) {
    int row = board.size();
    if (row == 0) return 0;
    int col = board[0].size();
    if (col == 0) return 0;

    int result = 0;
    for (int r = 0; r < row; ++r){
        for (int c = 0; c< col; ++c){
            if (board[r][c] == 'X') {
                result++;

                if (r != 0 && board[r-1][c] =='X') {
                    result--;
                }
                if (c != 0 && board[r][c-1] =='X') {
                    result--;
                }
            }


        }
    }
    return result;
}

int main(){

}
