//
// Created by Eric Liang on 4/7/18.
//

#include <leetcode.h>

bool exist(vector<vector<char>>& board, string word) {
    if (word.size() == 0) return true;
    if (board.size() == 0 || board[0].size() == 0) return true;

    for (int i = 0; i < board.size(); ++i){
        for (int j = 0; j < board[0].size(); ++j){
            if (board[i][j] == word[0]){
                vector<vector<bool>> mat(board.size(), vector<bool>(board[0].size(), false));
                mat[i][j] = true;
                if (dfs(board, word, i, j, 1, mat)) return true;
            }
        }
    }

    return false;
}

bool dfs(vector<vector<char>>& board, string word, int i, int j, int start, vector<vector<bool>>& mat){
    if (start >= word.size()) return true;

    if (i < board.size() - 1 && board[i+1][j] == word[start] && !mat[i+1][j]){
        vector<vector<bool>> copy(mat.begin(), mat.end());
        copy[i+1][j] = true;
        if (dfs(board, word, i+1, j, start+1, copy)) return true;
    }
    if (j < board[0].size() - 1 && board[i][j+1] == word[start] && !mat[i][j+1]){
        vector<vector<bool>> copy(mat.begin(), mat.end());
        copy[i][j+1] = true;
        if (dfs(board, word, i, j+1, start+1, copy)) return true;
    }
    if (i > 0 && board[i-1][j] == word[start] && !mat[i-1][j]){
        vector<vector<bool>> copy(mat.begin(), mat.end());
        copy[i-1][j] = true;
        if (dfs(board, word, i-1, j, start+1, copy)) return true;
    }
    if (j > 0 && board[i][j-1] == word[start] && !mat[i][j-1]){
        vector<vector<bool>> copy(mat.begin(), mat.end());
        copy[i][j-1] = true;
        if (dfs(board, word, i, j-1, start+1, copy)) return true;
    }
    return false;
}

int main(){

}
