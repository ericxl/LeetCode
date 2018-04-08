//
// Created by Eric Liang on 4/7/18.
//

#include <leetcode.h>

void wiggleSort(vector<int>& nums) {
    for(int i=0;i<nums.size();i++) {
        if(i%2==1){
            if(nums[i-1]>nums[i]) swap(nums[i-1], nums[i]);
        }
        else if(i!=0 && nums[i-1]<nums[i]) swap(nums[i-1], nums[i]);
    }
}

int main(){

}
