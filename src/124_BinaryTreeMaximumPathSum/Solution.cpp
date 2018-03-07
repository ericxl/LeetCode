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

long max(long x1, long x2){
    return x1 > x2 ? x1 : x2;
}

pair<long,long> maxPathSumRec(TreeNode* root){
    if (root == nullptr) return make_pair(INT_MIN, INT_MIN);

    auto l = maxPathSumRec(root->left);
    auto r = maxPathSumRec(root->right);

    long maxOnePath = max(max(l.first, r.first) + root->val, root->val);

    long complete = 0;
    complete = max(complete + l.first, complete);
    complete = max(complete + r.first, complete);

    complete = max(complete + root->val, root->val);

    long maxComplete = max(max(complete, l.second), r.second);
    return make_pair(maxOnePath, maxComplete);
}

int maxPathSum(TreeNode* root) {
    auto pair = maxPathSumRec(root);

    return max(pair.first, pair.second);
}

int main(){
    TreeNode n3(3);
    TreeNode n2(2);
    TreeNode n1(-1);

    //n1.right = &n3;
    //n2.left = &n1;
    auto result = maxPathSum(&n1);
}
