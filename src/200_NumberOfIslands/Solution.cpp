//
// Created by Eric Liang on 3/10/18.
//

#include <leetcode.h>

void visit(vector<vector<char>>& grid, int i, int j){
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '0') return;
    grid[i][j] = '0';
    visit(grid, i - 1, j);
    visit(grid, i + 1, j);
    visit(grid, i, j - 1);
    visit(grid, i, j + 1);
}

int numIslands(vector<vector<char>>& grid) {
    if (grid.size() == 0) return 0;

    int result = 0;
    for (int i = 0; i < grid.size(); ++i){
        for (int j = 0; j < grid[i].size(); ++j){
            if (grid[i][j] == '1'){
                visit(grid, i, j);
                ++result;
            }
        }

    }
    return result;
}

int main(){
    vector<vector<char>> grid = {{'1','1','0','0','0'},
                                 {'1','1','0','0','0'},
                                 {'0','0','1','0','0'},
                                 {'0','0','0','1','1'}};
    vector<vector<char>> grid2 = {{'0','1','0'},
                                  {'1','0','1'},
                                  {'0','1','0'}};
    int result = numIslands(grid2);
}
