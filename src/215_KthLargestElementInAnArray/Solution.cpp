//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>*(&nums)

int quickSelectPartition(vector<int>& nums, int from, int to){
    if (from == to){return from;}
    int pivot = nums[to];
    int pIndex = from;

    for (int i = from; i < to; i ++){
        if (nums[i] > pivot){
            swap(nums[i], nums[pIndex]);
            pIndex++;
        }
    }

    swap(nums[pIndex], nums[to]);

    return pIndex;
}

int quickSelectRec(vector<int>& nums, int from, int to, int k){

    int p = quickSelectPartition(nums, from, to);

    if (p < k){
        return quickSelectRec(nums, p+1, to, k);
    }
    else if (p > k) {
        return quickSelectRec(nums, from, p - 1, k);
    }
    return nums[p];
}

int findKthLargest(vector<int>& nums, int k) {
    int size = nums.size();
    if (k > size) {
        k = size;
    }

    return quickSelectRec(nums, 0, size-1, k - 1);
}




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
    vector<int> a = {2,1};

    int y = findKthLargest(a, 1);

    int x = 0;
}
