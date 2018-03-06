//
// Created by Eric Liang on 3/2/18.
//

#include <leetcode.h>

int lengthOfLongestSubstring(string s) {
    int size = s.length();
    map<char, int>m;
    int res = 0;
    int start = -1;
    for (int i = 0; i < size; i++){
        if (m[s[i]] - 1 > start) {
            start = m[s[i]] - 1;
        }
        m[s[i]] = i + 1;
        res = max(res, i - start );
    }
    return res;
}

int main(){

}
