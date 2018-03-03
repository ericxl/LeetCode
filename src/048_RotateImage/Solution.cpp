//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

void rotate(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int maxi = n / 2 + n % 2;
    int maxj = n / 2;
    int n1 = n - 1;

    for (int i = 0; i < maxi; i++) {
        for (int j = 0; j < maxj; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][n1 - i];
            matrix[j][n1 - i] = matrix[n1 - i][n1 - j];
            matrix[n1 - i][n1 - j] = matrix[n1 - j][i];
            matrix[n1 - j][i] = temp;
        }
    }

}

int main() {
    vector<vector<int>> x = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};
    rotate(x);
}
