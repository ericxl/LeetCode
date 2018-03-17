//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

bool isAnagram(string s, string t) {
    map<char, int> m;
    for (char c : s){
        m[c] = m[c] + 1;
    }
    for (char c : t){
        m[c] = m[c] - 1;
        if (m[c] < 0) return false;
    }

    for (auto& pair : m){
        if (pair.second != 0){
            return false;
        }
    }
    return true;
}

int main(){

}
