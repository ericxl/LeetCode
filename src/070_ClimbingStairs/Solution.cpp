//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

int climbStairs(int n) {
    if (n <= 2){
        return n;
    }
    int curIdx = 2;

    int n_two = 1;
    int n_one = 1;
    int n_cur = 2;

    while (curIdx * 2 < n){
        int a = n_cur * n_cur + n_one * n_one;
        int b = n_cur * n_one + n_one * n_two;
        int c = n_one * n_one + n_two * n_two;
        n_two = c;
        n_one = b;
        n_cur = a;
        curIdx = curIdx * 2;
    }

    for (int i = curIdx + 1; i <= n; i++){
        n_two = n_one;
        n_one = n_cur;
        n_cur = n_one + n_two;
    }
    return n_cur;
}

int main(){

}
