//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

void diff(TreeNode* root, int&result, int& com) {

    if (root->left) {
        diff(root->left, result, com);
    }
    if (com >= 0) result = min(result, root->val - com);
    com = root->val;
    if (root->right) {
        diff(root->right, result, com);
    }
}

int minDiffInBST(TreeNode* root) {
    int result = INT_MAX;
    int initial = -1;
    diff(root, result, initial);
    return result;
}

int main(){

}
