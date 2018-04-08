//
// Created by Eric Liang on 4/7/18.
//

#include <leetcode.h>

int closestValue(TreeNode* root, double target) {
    if (root == nullptr) return 0;
    TreeNode* next = root->val > target ? root->left : root->right;
    if (!next) return root->val;
    int valFromNext = closestValue(next, target);
    return abs(root->val - target) > abs(valFromNext - target) ? valFromNext : root->val;
}

int main(){

}
