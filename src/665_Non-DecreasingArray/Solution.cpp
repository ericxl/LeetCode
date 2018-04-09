//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

bool checkPossibility(vector<int>& nums) {
    int cnt = 0;
    for(int i = 1; i < nums.size() && cnt<=1 ; i++){
        if(nums[i-1] > nums[i]){
            cnt++;
            if (cnt > 1) return false;
            if(i-2<0 || nums[i-2] <= nums[i])nums[i-1] = nums[i];
            else nums[i] = nums[i-1];
        }
    }
    return true;
}

int main(){
    vector<int> nums = {3,3,2,2};
    bool result = checkPossibility(nums);
}
