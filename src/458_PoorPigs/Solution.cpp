//
// Created by Eric Liang on 3/2/18.
//

#include <leetcode.h>

int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
    int pigs = 0;
    while (pow((minutesToTest / minutesToDie + 1), pigs) < buckets){
        pigs++;
    }
    return pigs;
}

int main(){

}
