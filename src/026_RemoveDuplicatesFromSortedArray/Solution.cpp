//
// Created by Eric Liang on 3/8/18.
//

#include <leetcode.h>

int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    int count = 0;

    for (int i = 1; i < nums.size(); i++){
        if (nums[i] == nums[i-1]){
            ++count;
        } else {
            nums[i-count] = nums[i];
        }
    }
    return nums.size() - count;
}

int main(){

}
