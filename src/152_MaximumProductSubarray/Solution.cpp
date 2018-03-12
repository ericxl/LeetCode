//
// Created by Eric Liang on 3/12/18.
//

#include <leetcode.h>

int maxProduct(vector<int>& nums) {
    if (nums.size() == 0) return 0;

    int result = nums[0];
    int minHere = nums[0];
    int maxHere = nums[0];

    for (int i = 1; i < nums.size(); ++i){
        if (nums[i] < 0){
            swap(minHere, maxHere);
        }
        minHere = min(nums[i], nums[i] * minHere);
        maxHere = max(nums[i], nums[i] * maxHere);

        result = max(maxHere, result);
    }
    return result;

}

int main(){

}
