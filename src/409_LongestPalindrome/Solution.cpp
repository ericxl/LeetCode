//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

int longestPalindrome(string s) {
    int result = 0;
    unordered_set<char> m;
    for (auto& c : s){
        if (m.find(c) != m.end()) {
            result += 2;
            m.erase(c);
        }
        else {
            m.insert(c);
        }
    }
    if (!m.empty()) result++;
    return result;
}

int main(){

}
