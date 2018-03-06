//
// Created by Eric Liang on 3/6/18.
//

#include <leetcode.h>

void merge(vector<int>& nums, int start, int end){
    int mid = (start+end) / 2;
    int left = start;
    int right = mid + 1;
    vector<int> copy(end - start + 1);

    int copied = 0;
    while (copied < copy.size()){
        if ((left <= mid) &&(nums[left] < nums[right]) || (right>end)){
            copy[copied] = nums[left];
            copied++;
            left++;
        }
        else {
            copy[copied] = nums[right];
            copied++;
            right++;
        }
    }

    for(int k=0; k < copy.size(); k++)
    {
        nums[start+k] = copy[k];
    }

}

void mergeSort(vector<int>& nums, int start, int end){
    if (start >= end){
        return;
    }

    int breakup = (start + end) / 2;
    mergeSort(nums, start, breakup);
    mergeSort(nums, breakup + 1, end);

    merge(nums,start,end);
}

void mergeSort(vector<int>& nums){
    mergeSort(nums, 0, nums.size() - 1);
}

int main(){
    vector<int> arr = {12, 15, 23, 4 , 6, 10, 35, 28, 100, 130, 500, 1000, 235, 554, 75, 345, 800, 222, 333, 888, 444, 111, 666, 777, 60};
    mergeSort(arr);
    int x = 0;
}
