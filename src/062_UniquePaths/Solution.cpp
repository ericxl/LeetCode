//
// Created by Eric Liang on 3/29/18.
//

#include <leetcode.h>

int uniquePaths(int m, int n) {
    vector<int> mat(n, 1);
    if (m == 1) return 1;

    for (int i = 1; i < m; ++i){
        for (int j = 1; j < n; ++j){
            mat[j] += mat[j-1];
        }
    }
    return mat[n-1];
}

int main(){

}
