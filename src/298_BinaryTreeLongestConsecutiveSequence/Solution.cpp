//
// Created by Eric Liang on 4/5/18.
//

#include <leetcode.h>

int longest(TreeNode* root, int count, int parentVal) {
    if (root == nullptr) return count;

    count = (root->val - parentVal) == 1 ? (count + 1) : 1;

    int left = longest(root->left, count, root->val);
    int right = longest(root->right, count, root->val);

    return max(max(left, right),count);
}

int longestConsecutive(TreeNode* root) {
    return root == nullptr ? 0 : max(longest(root->left, 1, root->val), longest(root->right, 1, root->val));
}

int main(){

}
