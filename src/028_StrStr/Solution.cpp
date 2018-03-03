//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

int strStr(string haystack, string needle) {
    int ndlIdx = 0;
    int hayIdx = 0;
    int hayCurrent = 0;
    while (hayIdx < haystack.size()) {
        if (haystack[hayIdx] == needle[ndlIdx]) {
            if (ndlIdx == needle.size() - 1) {
                return hayCurrent;
            }

            ndlIdx++;
            hayIdx++;
        } else {
            hayCurrent++;
            hayIdx = hayCurrent;
            ndlIdx = 0;
        }
    }
    return -1;
}

int main() {

    int result = strStr("hello", "ll");

}
