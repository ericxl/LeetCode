//
// Created by Eric Liang on 4/7/18.
//

#include <leetcode.h>

void dfs(vector<vector<int>>& rooms, int i, int j, int dist){
    if (i < 0 || i >= rooms.size() || j < 0 || j >= rooms[0].size() || rooms[i][j] < dist) return;

    if (rooms[i][j] != -1){
        rooms[i][j] = min(rooms[i][j], dist);
    }
    dfs(rooms, i-1, j, dist+1);
    dfs(rooms, i, j-1, dist+1);
    dfs(rooms, i+1, j, dist+1);
    dfs(rooms, i, j+1, dist+1);
}

void wallsAndGates(vector<vector<int>>& rooms) {
    for (int i = 0; i < rooms.size(); ++i){
        for (int j = 0; j < rooms[0].size(); ++j){
            if (rooms[i][j] == 0) {
                dfs(rooms, i, j, 0);
            }
        }
    }
}

int main(){

}
