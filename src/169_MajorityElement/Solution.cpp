//
// Created by Eric Liang on 3/7/18.
//

#include <leetcode.h>

int majorityElement(vector<int>& nums) {
    int cur = nums[0];
    int curCount = 1;

    int idx = 1;
    while (idx < nums.size()){
        if (curCount == 0){
            curCount = 1;
            cur = nums[idx];
        } else if (nums[idx] == cur){
            curCount ++;
        } else {
            curCount--;
        }
        idx ++;
    }
    return cur;
}

int main(){

}
