//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int numRows = matrix.size();
    if (numRows == 0) return false;
    int numCols = matrix[0].size();
    if (numCols == 0) return false;

    int i = numRows - 1;
    int j = 0;

    while(i >= 0 && j < numCols){
        if (matrix[i][j] > target){
            i--;
        }
        else if (matrix[i][j] < target){
            j++;
        }
        else return true;
    }
    return false;
}

int main(){

}
