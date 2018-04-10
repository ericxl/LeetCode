//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

int threeSumSmaller(vector<int>& nums, int target) {
    if (nums.size() < 1) return 0;
    int size = nums.size();
    sort(nums.begin(), nums.end());
    int result = 0;
    for (int i = 0; i < size - 2; ++i){
        int left = i + 1;
        int right = size - 1;
        while (left < right){
            if (nums[i] + nums[left] + nums[right] < target){
                result += (right - left);
                left++;
            }
            else {
                right--;
            }
        }
    }
    return result;
}

int main(){
    vector<int> v = {};
    threeSumSmaller(v,3);
}
