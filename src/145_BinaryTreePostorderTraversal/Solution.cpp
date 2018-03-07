//
// Created by Eric Liang on 3/4/18.
//

#include <leetcode.h>

void postRecur(TreeNode* root, vector<int>&order){
    if(root == nullptr) return;

    if (root->left) {
        postRecur(root->left, order);
    }
    if(root->right){
        postRecur(root->right, order);
    }

    order.push_back(root->val);
}

vector<int> postorderTraversalRecursiveSolution(TreeNode* root) {
    vector<int> ret;
    postRecur(root, ret);

    return ret;
}

vector<int> postorderTraversal(TreeNode* root) {
    vector<int> ret;
    stack<TreeNode*>q;
    if (root == nullptr) return ret;
    set<TreeNode*>visited;
    q.push(root);

    while(!q.empty()){
        TreeNode* cur = q.top();
        //q.pop();
        bool leftDone = cur->left == nullptr ? true : visited.find(cur->left) != visited.end();
        bool rightDone = cur->right == nullptr ? true : visited.find(cur->right) != visited.end();
        if (leftDone && rightDone){
            ret.push_back(cur->val);
            visited.insert(cur);
            q.pop();
            continue;
        }

        if (!rightDone){
            q.push(cur->right);
        }

        if (!leftDone){
            q.push(cur->left);
        }

    }
    return ret;
}

int main(){
    TreeNode n1(1);
    TreeNode n2(2);
    TreeNode n3(3);

    n3.left = &n3;
    n3.right = &n2;
    auto result = postorderTraversal(&n1);
}
