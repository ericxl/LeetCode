//
// Created by Eric Liang on 4/5/18.
//

#include <leetcode.h>

int kthSmallest(TreeNode* root, int k) {
    stack<TreeNode*>s;

    TreeNode* itr = root;
    while (itr != nullptr){
        s.push(itr);
        itr = itr->left;
    }

    int i = 0;
    TreeNode* cur;
    while (i < k) {
        cur = s.top();
        s.pop();

        if (cur->right) {
            TreeNode* st = cur->right;
            while (st!=nullptr){
                s.push(st);
                st = st->left;
            }
        }

        i++;
    }

    return cur->val;
}

int main(){

}
