//
// Created by Eric Liang on 3/10/18.
//

#include <leetcode.h>

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<string>> hash;
    vector<vector<string>> result;
    for (string str : strs){
        string key = str;
        sort(key.begin(), key.end(), [](char c1, char c2){
            return c1 < c2;
        });
        hash[key].push_back(str);
    }

    for (auto pair : hash){
        result.push_back(vector<string>(pair.second.begin(), pair.second.end()));
    }
    return result;
}

int main(){}
