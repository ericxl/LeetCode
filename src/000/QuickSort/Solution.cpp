//
// Created by Eric Liang on 3/6/18.
//

#include <leetcode.h>

int quickSortPartition(vector<int>& nums, int from, int to){
    int pivot = nums[to];
    int pIndex = from;
    for (int i = from; i < to; i++){
        if (nums[i] <= pivot){
            swap(nums[i], nums[pIndex]);
            pIndex++;
        }
    }
    swap(nums[to], nums[pIndex]);
    return pIndex;
}

void quickSortRec(vector<int>& nums, int from, int to) {
    if (from < to ){
        int pIndex = quickSortPartition(nums, from, to);
        quickSortRec(nums, from, pIndex - 1);
        quickSortRec(nums, pIndex + 1, to);
    }
}

void quickSort(vector<int>& nums){
    quickSortRec(nums, 0, nums.size() - 1);
}

int main(){

}
