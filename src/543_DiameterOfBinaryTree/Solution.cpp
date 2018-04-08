//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

pair<int,int> dia(TreeNode* root){
    if (!root) return make_pair(-1, -1);
    auto left = dia(root->left);
    auto right = dia(root->right);
    int selfComplete = left.first + right.first+2;
    int selfPartial = max(left.first, right.first) + 1;
    int curMax = max(selfComplete, max(left.second, right.second));
    return make_pair(selfPartial, curMax);
}

int diameterOfBinaryTree(TreeNode* root) {
    if (!root) return 0;
    auto p = dia(root);
    return p.second;
}

int main(){

}
