//
// Created by Eric Liang on 3/12/18.
//

#include <leetcode.h>

int islandPerimeter(vector<vector<int>>& grid) {
    if (grid.size() == 0) return 0;

    int num = 0;
    int neigh = 0;
    for (int row = 0; row < grid.size(); ++row){
        for (int col = 0; col < grid[0].size(); ++col){
            if (grid[row][col] != 0){
                ++num;
                if (row + 1 < grid.size() && grid[row+1][col] != 0){
                    neigh++;
                }
                if (col + 1 < grid[0].size() && grid[row][col+1] != 0){
                    neigh++;
                }
            }
        }
    }
    return num*4-neigh*2;
}

int main(){

}
