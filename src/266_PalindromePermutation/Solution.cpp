//
// Created by Eric Liang on 4/7/18.
//

#include <leetcode.h>

bool canPermutePalindrome(string s) {
    unordered_set<char> m;
    for (auto& c : s){
        if (m.find(c) != m.end()){
            m.erase(c);
        }
        else {
            m.insert(c);
        }
    }
    return m.size() < 2;
}

int main(){

}
