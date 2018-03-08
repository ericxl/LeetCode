//
// Created by Eric Liang on 3/7/18.
//

#include <leetcode.h>

TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
    if (t1 && t2){
        t1->left = mergeTrees(t1->left, t2->left);
        t1->right = mergeTrees(t1->right, t2->right);
        t1->val += t2->val;
        return t1;
    }
    return t1 ? t1 : t2;
}

int main(){

}
