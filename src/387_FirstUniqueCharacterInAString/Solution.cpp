//
// Created by Eric Liang on 3/18/18.
//

#include <leetcode.h>

int firstUniqChar(string s) {
    unordered_map<char, pair<int, int>> m;
    int idx = s.size();
    for (int i = 0; i < s.size(); i++) {
        m[s[i]].first++;
        m[s[i]].second = i;
    }
    for (auto &p : m) {
        if (p.second.first == 1) idx = min(idx, p.second.second);
    }
    return idx == s.size() ? -1 : idx;
}

int main(){

}
