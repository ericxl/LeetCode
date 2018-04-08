//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

TreeNode* construct(vector<int>&nums, int start, int end){
    if (start < 0 || end >= nums.size() || start > end) return nullptr;
    int maxVal = INT_MIN;
    int maxIdx = -1;
    for (int i = start; i <= end; ++i) {
        if (nums[i] > maxVal){
            maxVal = nums[i];
            maxIdx = i;
        }
    }
    TreeNode* n = new TreeNode(maxVal);
    n->left = construct(nums, start, maxIdx - 1);
    n->right = construct(nums, maxIdx + 1, end);
    return n;
}

TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    return construct(nums, 0, nums.size()-1);
}

int main(){

}
