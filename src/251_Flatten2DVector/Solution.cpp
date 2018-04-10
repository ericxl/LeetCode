//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

class Vector2D {
    int i,j;
    vector<vector<int>> vec;
public:
    Vector2D(vector<vector<int>>& vec2d) {
        vec = vec2d;
        i=0; j = 0;
        while (i < vec.size() && j >= vec[i].size()){
            i++;
            j = 0;
        }
    }

    int next() {
        int cur = vec[i][j];
        j++;
        while (i < vec.size() && j >= vec[i].size()){
            i++;
            j = 0;
        }
        return cur;
    }

    bool hasNext() {
        return i < vec.size() && (j < vec[i].size());
    }
};

int main(){

}
