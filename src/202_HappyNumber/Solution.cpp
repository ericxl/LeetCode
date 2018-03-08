//
// Created by Eric Liang on 3/7/18.
//

#include <leetcode.h>

int digitSquareSum(int n) {
    int sum = 0, tmp;
    while (n) {
        tmp = n % 10;
        sum += tmp * tmp;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int ahead = n;
    int next = n;
    do {
        ahead = digitSquareSum(ahead);
        ahead = digitSquareSum(ahead);
        next = digitSquareSum(next);
    } while(ahead != next && ahead != 1);
    if (ahead == 1) {
        return true;
    }
    return false;
}

int main(){

}
