//
// Created by Eric Liang on 3/29/18.
//

#include <leetcode.h>

bool isPowerOfTwo(int n) {
    if(n<=0) return false;
    return ((n-1)&n) == 0;
}

int main(){

}
