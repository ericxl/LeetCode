//
// Created by Eric Liang on 3/12/18.
//

#include <leetcode.h>

int myAtoi(string str) {
    int i = 0;
    while (str[i] == ' ') {
        ++i;
    }
    if (i >= str.size()) return 0;

    int sign = 1;
    if (str[i] == '-'){
        sign = -1;
        ++i;
    } else if (str[i] == '+'){
        ++i;
    }
    bool overflow = false;
    int result = 0;
    while (i < str.size()){
        char c = str[i];
        int val = c - '0';
        if (val > 9 || val < 0){
            break;
        }
        int temp = result * 10 + sign * val;
        if (sign > 0 && (temp % 10 != val)){
            overflow = true;
            break;
        } else if (sign < 0 && (temp % 10 !=  - val)){
            overflow = true;
            break;
        }
        result = temp;
        ++i;
    }

    return !overflow ? result : (sign > 0 ? INT_MAX : INT_MIN);
}

int main(){

}
