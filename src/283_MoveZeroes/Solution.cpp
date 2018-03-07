//
// Created by Eric Liang on 3/6/18.
//

#include <leetcode.h>

void moveZeroes(vector<int>& nums) {
    if (nums.size() == 0) return;

    int insertIdx = 0;
    for(int num : nums){
        if (num != 0){
            nums[insertIdx] = num;
            insertIdx ++;
        }
    }

    while (insertIdx < nums.size()){
        nums[insertIdx] = 0;
        insertIdx++;
    }
}

int main(){

}
