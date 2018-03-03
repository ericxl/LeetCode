//
// Created by Eric Liang on 3/2/18.
//

#include <leetcode.h>

int hammingDistance(int x, int y) {
    int res = 0;
    for (int i = 0; i < 32; i++){
        res += 1 & ((x >> i) ^ (y >> i));
    }
    return res;
}

int main(){

}
