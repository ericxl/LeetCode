//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

int findUnsortedSubarray(vector<int>& nums) {
    int beg = -1, end = -2, minimum = nums[nums.size()-1], maximum = nums[0];
    for (int i=1;i<nums.size();i++) {
        maximum = max(maximum, nums[i]);
        minimum = min(minimum, nums[nums.size()-1-i]);
        if (nums[i] < maximum) end = i;
        if (nums[nums.size()-1-i] > minimum) beg = nums.size()-1-i;
    }
    return end - beg + 1;
}

int main(){

}
