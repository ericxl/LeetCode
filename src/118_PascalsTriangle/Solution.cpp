//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res;

    for (int i = 1; i <= numRows; i++) {
        vector<int> cur(i, 1);

        for (int j = 1; j < i - 1; j++){
            cur[j] = res[i-2][j-1] + res[i-2][j];
        }

        res.push_back(cur);

    }

    return res;
}

int main() {

}
