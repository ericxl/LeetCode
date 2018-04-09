//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

int numberOfBoomerangs(vector<pair<int, int>>& points) {
    int size = points.size();
    int result = 0;
    for (int i = 0; i < size; ++i){
        unordered_map<long, int> m;
        for (int j = 0; j < size; ++j){
            if (i == j) continue;

            auto a = points[i];
            auto b = points[j];
            long dsquare = (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);

            m[dsquare] = m[dsquare] + 1;
        }

        for (auto it = m.begin(); it != m.end(); it++)
        {
            result += it->second * (it->second -1);
        }
    }

    return result;
}

int main(){

}
