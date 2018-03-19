//
// Created by Eric Liang on 3/18/18.
//

#include <leetcode.h>

vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
    sort(people.begin(), people.end(), [](pair<int,int> p1, pair<int,int>p2){
        if (p1.first == p2.first) {
            return p1.second < p2.second;
        }
        return p1.first > p2.first;
    });

    vector<pair<int,int>> result;
    for (auto& p : people)
        result.insert(result.begin() + p.second, p);

    return result;
}

int main(){

}
