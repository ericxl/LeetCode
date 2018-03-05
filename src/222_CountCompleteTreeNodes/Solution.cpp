//
// Created by Eric Liang on 3/4/18.
//

#include <leetcode.h>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int countNodes(TreeNode* root) {
    if (root==nullptr) return 0;

    if (root->left == nullptr && root->right == nullptr){
        return 1;
    }

    int lh = 0;
    int rh = 0;

    TreeNode* l = root;
    TreeNode* r = root;
    while(l){
        lh++;
        l = l->left;
    }
    while(r){
        rh++;
        r = r->right;
    }

    if(lh==rh){
        return pow(2,lh)-1;
    }

    return countNodes(root->left) + countNodes(root->right) + 1;
}

int main(){

}
