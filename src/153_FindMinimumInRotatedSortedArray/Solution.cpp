//
// Created by Eric Liang on 3/16/18.
//

#include <leetcode.h>

int findMin(vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;

    while (end - start > 1){
        if (nums[start] < nums[end]) {
            return nums[start];
        }
        int mid = (end - start) / 2 + start;

        if (nums[start] < nums[mid]){
            start = mid;
        }else {
            end = mid;
        }

    }
    return min(nums[start], nums[end]);
}

int main(){

}
