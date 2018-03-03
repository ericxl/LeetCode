//
// Created by Eric Liang on 3/2/18.
//

#include <leetcode.h>

int singleNumber(vector<int>& nums) {
    int res = 0;
    for (int i = 0; i < nums.size(); i++){
        res ^= nums[i];
    }
    return res;
}
