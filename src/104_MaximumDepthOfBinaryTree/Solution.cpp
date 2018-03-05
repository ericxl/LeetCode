//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int maxDepth(TreeNode* root) {
    if (root == nullptr){
        return 0;
    }

    queue<TreeNode*> q;

    int maxDepth = 0;

    q.push(root);
    q.push(nullptr);

    int currentDepth = 0;
    while(!q.empty()){
        TreeNode* cur = q.front();
        q.pop();

        if (cur == nullptr){
            if (q.size() > 0){
                q.push(nullptr);
            }
            currentDepth ++;
        }
        else {
            if (cur->left != nullptr){
                q.push(cur->left);
            }
            if (cur->right != nullptr){
                q.push(cur->right);
            }
        }
    }
    return currentDepth;
}

int main(){

}
