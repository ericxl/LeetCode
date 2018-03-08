//
// Created by Eric Liang on 3/8/18.
//

#include <leetcode.h>

int partition(vector<int>& nums, int start, int end){
    int pivot = nums[end];
    int pos = start;
    for (int i = start; i < end; i++){
        if (nums[i] <= pivot) {
            swap (nums[i], nums[pos]);
            pos++;
        }
    }
    swap(nums[pos], nums[end]);
    return pos;
}

void quickSortRec(vector<int>& nums, int start, int end){
    if(start < end){
        int p = partition(nums, start, end);

        quickSortRec(nums, start, p - 1);
        quickSortRec(nums, p+1, end);
    }
}

void quickSort(vector<int>& nums){
    quickSortRec(nums, 0, nums.size()-1);
}

int arrayPairSum(vector<int>& nums) {
    quickSort(nums);
    int result = 0;
    for (int i = 0; i < nums.size(); i+=2){
        result += nums[i];
    }
    return result;
}

int main(){

}
