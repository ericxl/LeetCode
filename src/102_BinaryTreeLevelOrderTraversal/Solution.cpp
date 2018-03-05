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

void levelDFS(TreeNode* root, int depth, vector<vector<int>>& result){
    if (root == nullptr){
        return;
    }
    if (result.size() == depth){
        result.push_back(vector<int>());
    }

    result[depth].push_back(root->val);

    levelDFS(root->left, depth+1, result);
    levelDFS(root->right, depth+1, result);
}

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    levelDFS(root,0, result);
    return result;
}

int main(){

}
