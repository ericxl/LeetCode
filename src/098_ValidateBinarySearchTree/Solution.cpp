//
// Created by Eric Liang on 3/5/18.
//

#include <leetcode.h>

bool isValidBST(TreeNode* root) {
    stack<TreeNode*> stack;
    TreeNode* pre = nullptr;
    if (root == nullptr) return true;
    while (root != nullptr || !stack.empty()) {
        while (root != nullptr) {
            stack.push(root);
            root = root->left;
        }

        root = stack.top();
        stack.pop();
        if (pre != nullptr && pre->val >= root->val) return false;
        pre = root;
        //
        root = root->right;
    }
    return true;

}

int main(){

}
