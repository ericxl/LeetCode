//
// Created by Eric Liang on 2/26/18.
//

#include <leetcode.h>

// [I, V, X, L, C, D, M]

int romanToInt(string s) {
    int sum = 0;

    if (s.find("IV") != string::npos) sum -= 2;
    if (s.find("IX") != string::npos) sum -= 2;
    if (s.find("XL") != string::npos) sum -= 20;
    if (s.find("XC") != string::npos) sum -= 20;
    if (s.find("CD") != string::npos) sum -= 200;
    if (s.find("CM") != string::npos) sum -= 200;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'I') sum += 1;
        if (s[i] == 'V') sum += 5;
        if (s[i] == 'X') sum += 10;
        if (s[i] == 'L') sum += 50;
        if (s[i] == 'C') sum += 100;
        if (s[i] == 'D') sum += 500;
        if (s[i] == 'M') sum += 1000;
    }

    return sum;
}

int main(){

}
