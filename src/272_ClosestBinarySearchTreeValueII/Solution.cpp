//
// Created by Eric Liang on 4/7/18.
//

#include <leetcode.h>

int getSuc(TreeNode* root, double target, stack<TreeNode*>& suc){
    TreeNode* node = suc.top();
    suc.pop();
    int res = node->val;
    node = node->right;
    while (node) { suc.push(node); node = node->left; }
    return res;
}

int getPre(TreeNode* root, double target, stack<TreeNode*>& pre){
    TreeNode* node = pre.top();
    pre.pop();
    int res = node->val;
    node = node->left;
    while (node) { pre.push(node); node = node->right; }
    return res;
}

vector<int> closestKValues(TreeNode* root, double target, int k) {
    stack<TreeNode*> pre;
    stack<TreeNode*> suc;
    TreeNode*copy = root;
    while(copy){
        if (copy->val == target) {
            pre.push(copy);
            break;
        }
        if (copy->val < target){
            pre.push(copy);
            copy = copy->right;
        }
        else {
            copy = copy->left;
        }
    }
    copy = root;
    while(copy){
        if (copy->val == target) {
            suc.push(copy);
            break;
        }
        if (copy->val > target){
            suc.push(copy);
            copy = copy->left;
        }
        else {
            copy = copy->right;
        }
    }

    if (!pre.empty() && !suc.empty() && pre.top() == suc.top()) getPre(root, target, pre);

    vector<int> res;
    while (k > 0){
        if      (pre.empty()) res.push_back(getSuc(root, target, suc));
        else if (suc.empty()) res.push_back(getPre(root, target, pre));
        else {
            double preDiff = fabs(double(pre.top()->val) - target);
            double sucDiff = fabs(double(suc.top()->val) - target);
            res.push_back(preDiff < sucDiff ? getPre(root, target, pre) : getSuc(root, target, suc));
        }
        k--;
    }
    return res;
}

int main(){

}
