//
// Created by Eric Liang on 3/3/18.
//

#import <leetcode.h>

int minDepth(TreeNode* root) {
    if (root == nullptr) return 0;
    if (root->left == nullptr && root->right == nullptr) return 1;
    int l = INT_MAX;
    if (root->left != nullptr){
        l = minDepth(root->left);
    }
    int r = INT_MAX;
    if (root->right != nullptr){
        r = minDepth(root->right);
    }

    return min (l,r) + 1;
}

int main(){

}
