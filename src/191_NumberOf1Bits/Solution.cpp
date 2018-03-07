//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

int hammingWeight(uint32_t n) {
    int ctn = 0;
    while (n != 0){
        ctn += n & 0x01;
        n = n>>1;
    }
    return ctn;
}

int main(){

}
