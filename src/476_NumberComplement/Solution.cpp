//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

int findComplement(int num) {
    unsigned mask = ~0;
    while (num & mask) mask <<= 1;
    return ~mask & ~num;
}

int main(){

}
