//
// Created by Eric Liang on 2/25/18.
//
#include "../../inc/leetcode.h"
class Solution221 {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.size() == 0) return 0;

        int res = 0;
        int prev = 0;
        vector<int> dp(matrix[0].size());
        for (int i = 0; i < matrix[0].size(); i++){
            dp[i] = matrix[0][i] - '0';
            res = max(res, dp[i]);
        }

        for (int row = 1; row < matrix.size(); row++){
            prev = dp[0];
            dp[0] = matrix[row][0] - '0';

            res = max(res, dp[0]);

            for (int col = 1; col < matrix[row].size(); col++){
                int temp = dp[col];
                int cur = matrix[row][col] - '0' == 1 ? min(min(prev, dp[col - 1]), dp[col]) + 1 : 0;
                dp[col] = cur;
                prev = temp;
                res = max(res, cur);
            }

        }
        return res * res;
    }
};

int main221(){
    Solution221 s;
    vector<vector<char>> v = {{'1','0','1','0'},{'1','0','1','1'},{'1','0','1','1'},{'1','1','1','1'}};
    auto val1 = s.maximalSquare(v);

    int x = 0;
}
