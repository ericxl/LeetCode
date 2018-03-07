//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
    if (root == nullptr || root == p || root == q){
        return root;
    }

    TreeNode* l = lowestCommonAncestor(root->left, p, q);
    if (l != nullptr && l->val != p->val && l->val != q->val) return l;
    TreeNode* r = lowestCommonAncestor(root->right, p, q);
    if(l != nullptr && r != nullptr) return root;
    if(l != nullptr) return l;
    return r;
}

int main(){

}

