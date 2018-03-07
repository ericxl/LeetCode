//
// Created by Eric Liang on 3/6/18.
//

#include <leetcode.h>
int removeElement(vector<int>& nums, int val) {
    int size = nums.size();
    int i = 0;
    while (i < size){
        if (nums[i] == val){
            for (int j = i + 1; j < nums.size(); j++){
                nums[j-1] = nums[j];
            }
            size--;
            i--;
        }
        i++;
    }

    return size;
}

int main(){

}
