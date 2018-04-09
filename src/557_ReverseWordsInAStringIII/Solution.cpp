//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

string reverseWords(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {   // when i is a non-space
            int j = i;
            for (; j < s.length() && s[j] != ' '; j++) { } // move j to the next space
            reverse(s.begin() + i, s.begin() + j);
            i = j;
        }
    }

    return s;
}

int main(){

}
