//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

int mySqrt(int x) {
    if (x == 1) {
        return 1;
    }
    if (x == 0) {
        return 0;
    }
    int min = 1;
    int max = x / 2;
    while (true) {
        if (min == max) {
            return min;
        } else if (min == max - 1) {
            if (x / max == max) {
                return max;
            }
            return min;
        }
        int mid = min + (max - min) / 2;
        if (x / mid < mid) {
            max = mid;
        } else if (x / mid == mid) {
            return mid;
        } else {
            min = mid;
        }
    }

}

int main(){

}
