//
// Created by Eric Liang on 3/16/18.
//

#include <leetcode.h>

bool isSameTree(TreeNode* p, TreeNode* q) {
    if ((p == nullptr || q == nullptr) && p != q) return false;
    if (p == nullptr && q == nullptr) return true;
    if (p->val != q->val) return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main(){

}
