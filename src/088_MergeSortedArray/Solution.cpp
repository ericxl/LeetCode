//
// Created by Eric Liang on 3/7/18.
//

#include <leetcode.h>

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int idx = n+m-1;
    int ptr1 = m - 1;
    int ptr2 = n - 1;
    while (idx >= 0){
        if (ptr2 < 0) {
            nums1[idx] = nums1[ptr1--];
        } else if (ptr1 < 0){
            nums1[idx] = nums2[ptr2--];
        } else if (nums1[ptr1] > nums2[ptr2]){
            nums1[idx] = nums1[ptr1--];
        } else {
            nums1[idx] = nums2[ptr2--];
        }
        --idx;
    }
}

int main(){

}
