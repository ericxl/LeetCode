//
// Created by Eric Liang on 3/8/18.
//

#include <leetcode.h>

double myPow(double x, int n) {
    if (n == 0 || x == 1) return 1;
    if (x == -1) return n % 2 == 1 ? -1 : 1;
    if (n == INT_MIN) return 0;

    if (n < 0){
        x = 1 / x;
        n = -n;
    }

    double result = 1;
    double product = x;

    for (int i = n; i > 0; i/=2){
        if (i % 2 == 1){
            result = result * product;
        }
        product = product * product;
    }
    return result;
}

int main(){

}
