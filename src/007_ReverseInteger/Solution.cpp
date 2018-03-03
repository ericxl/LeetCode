//
// Created by Eric Liang on 2/26/18.
//

#include <leetcode.h>

int reverse(int x) {
    int sign = 1;
    if (x < 0) {
        sign = -1;
        x = -x;
    }

    int result = 0;
    while (x > 0) {
        int digit = x % 10;
        int temp = result * 10 + digit;
        if ((temp - digit) / 10 != result) {
            return 0;
        }

        result = temp;
        x = (x - digit) / 10;
    }
    if (result < 0) {
        result = 0;
    }
    return result * sign;
}

int main() {
    reverse(10);
}
