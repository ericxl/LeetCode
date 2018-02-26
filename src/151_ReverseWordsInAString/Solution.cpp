//
// Created by Eric Liang on 2/25/18.
//

#include "../../inc/leetcode.h"


class Solution {
public:
    void reverseWords(string &s) {
        if (s.size() <2) return;

        reverse(s, 0, s.size()-1);

        int i = 0;
        int j = 0;

        while (true){
            if (s[j] == ' ') {
                if (i != j){
                    reverse(s, i, j-1);
                }

                i = j+1;
            }
            else if (j >=s.size()-1){
                if (i != j){
                    reverse(s, i, j);
                }
                break;
            }
            j++;

        }
    }

    void reverse(string &s, int i, int j){
        for (int ctn = i; ctn < (j-i)/2 + 1 + i; ctn++){
            swap(s[ctn], s[j-(ctn-i)]);
        }
    }
};

int main151()
{

    Solution s;

    string str = "  hao le     ";
    s.reverseWords(str);

    return 0;
}