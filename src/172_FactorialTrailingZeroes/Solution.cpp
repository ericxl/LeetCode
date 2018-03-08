//
// Created by Eric Liang on 3/8/18.
//

#include <leetcode.h>

int trailingZeroes(int n) {
    int result = 0;
    for(long long i=5; n/i>0; i*=5){
        result += (n/i);
    }
    return result;

}

int main(){

}
