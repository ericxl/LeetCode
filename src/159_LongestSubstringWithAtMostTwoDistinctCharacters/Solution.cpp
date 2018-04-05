//
// Created by Eric Liang on 4/4/18.
//

#include <leetcode.h>

int lengthOfLongestSubstringTwoDistinct(string s) {
    int result = 0;
    int first = 0;
    int second = -1;
    for (int itr = 1; itr < s.size(); ++itr){
        if (s[itr] == s[itr -1]) continue;

        if (second != -1 && s[itr] != s[second]) {
            result = max(result, itr - first);
            first = second + 1;
        }

        second = itr - 1;
    }

    result = max(result, ((int)s.size() - first));
    return result;
}

int main(){
    int result = lengthOfLongestSubstringTwoDistinct("ecebaezxc");
}
