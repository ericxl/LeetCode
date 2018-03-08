//
// Created by Eric Liang on 3/8/18.
//

#include <leetcode.h>

int titleToNumber(string s) {
    int result = 0;
    for (int i = 0; i < s.size(); i++){
        char c = s[i];
        result = result * 26 + (c - 'A' + 1);
    }
    return result;
}

int main(){

}
