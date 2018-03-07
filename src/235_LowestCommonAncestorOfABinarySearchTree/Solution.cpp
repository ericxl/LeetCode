//
// Created by Eric Liang on 3/3/18.
//

#include <leetcode.h>

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == nullptr || root->val == p->val || root->val == q->val) return root;

    if (root->val > p->val && root->val > q->val){
        return lowestCommonAncestor(root->left, p, q);
    }
    if (root->val < p->val && root->val < q->val){
        return lowestCommonAncestor(root->right, p, q);
    }

    TreeNode* l = lowestCommonAncestor(root->left, p, q);
    TreeNode* r = lowestCommonAncestor(root->right, p, q);
    if(l != nullptr && r != nullptr){
        return root;
    }

    if (l == nullptr) return r;
    return l;
}

int main(){

}
