//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

bool sym(TreeNode* left, TreeNode* right) {
    if (left == nullptr && right == nullptr) return true;
    if (left == nullptr || right == nullptr) return false;
    if (left->val != right->val) return false;
    return sym(left->left, right->right) && sym(left->right, right->left);
}

bool isSymmetric(TreeNode* root) {
    if (root == nullptr) return true;
    return sym(root->left, root->right);
}

int main(){

}
