//
// Created by Eric Liang on 3/7/18.
//

#include <leetcode.h>

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());

    int nonZeroIdx = 0;
    map<int,int> map;
    for(; nonZeroIdx < nums.size() - 1; ++nonZeroIdx) {
        if (nums[nonZeroIdx] > 0) break;

        int target = -nums[nonZeroIdx];
        for (int i = nonZeroIdx + 1; i < nums.size(); i++){

        }






    }

    return result;
}

int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    auto result = threeSum(nums);
}
