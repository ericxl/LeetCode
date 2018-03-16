//
// Created by Eric Liang on 3/16/18.
//

#include <leetcode.h>

int search(vector<int>& nums, int target) {
    if (nums.size() == 0) return -1;
    int start = 0;
    int end = nums.size() - 1;

    while (start < end){
        if (target == nums[start]) return start;
        if (target == nums[end]) return end;

        int mid = (end - start) / 2 + start;
        if (target == nums[mid]) return mid;

        if (nums[start] < nums[mid]){
            if (nums[start] < target && target < nums[mid]){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }else {
            if (nums[mid] < target && target < nums[end]){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

    }
    return nums[start] == target ? start : -1;
}

int main(){

}
