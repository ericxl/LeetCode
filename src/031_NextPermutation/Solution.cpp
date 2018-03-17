//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

void nextPermutation(vector<int>& nums) {
    if (nums.size() < 2){
        return;
    }
    int i = nums.size() - 1;
    while (i > 0){
        if (nums[i] > nums[i-1]) {
            break;
        }
        --i;
    }

    if (i > 0){
        int prev = nums[i-1];

        int startPos = i;
        while (nums[i-1] < nums[startPos] && startPos < nums.size()){
            ++startPos;
        }
        --startPos;
        swap(nums[i-1], nums[startPos]);

    }


    int end = nums.size() - 1;
    while (i < end){
        swap(nums[i], nums[end]);
        ++i;
        --end;
    }
}

int main(){

}
