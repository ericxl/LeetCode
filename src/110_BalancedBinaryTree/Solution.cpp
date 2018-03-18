//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

int depth(TreeNode* node){
    if (node == nullptr) return 0;
    int l = depth(node->left);
    int r = depth(node->right);
    if (l == -1 || r == -1) return -1;
    if (abs(l-r) > 1) return -1;
    return max(l,r) + 1;

}

bool isBalanced(TreeNode* root) {
    return depth(root) != -1;
}

int main(){

}
