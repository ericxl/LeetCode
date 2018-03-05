//
// Created by Eric Liang on 3/5/18.
//

#include <leetcode.h>

int maxSubArray(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    if (nums.size() == 1) return nums[0];

    vector<int> sum(nums.size());
    sum[0] = nums[0];
    int result = sum[0];
    for (int i = 1; i < nums.size(); i++){
        int prev = sum[i-1];
        sum[i] = max(prev + nums[i], nums[i]);
        result = max(result, sum[i]);
    }
    return result;
}

int main(){

}
