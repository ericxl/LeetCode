//
// Created by Eric Liang on 3/8/18.
//

#include <leetcode.h>

int singleNumber(vector<int>& nums) {
    int ones = 0;
    int twos = 0;
    for (int num : nums){
        ones = (num ^ ones) & ~twos;
        twos = (num ^ twos) & ~ones;
    }
    return ones;
}

int main(){

}
