//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

bool areSentencesSimilar(vector<string>& words1, vector<string>& words2, vector<pair<string, string>> pairs) {
    if (words1.size() != words2.size()) return false;
    map<string, set<string>> map;
    for (auto& p : pairs)
        map[p.first].insert(p.second);

    for (int i = 0; i < words1.size(); i++)
        if (words1[i] != words2[i] && !map[words1[i]].count(words2[i]) && !map[words2[i]].count(words1[i]))
            return false;
    return true;
}

int main(){

}
