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

tuple<TreeNode*, bool, int, int, int> bst(TreeNode* root){
    if (root == nullptr){
        return make_tuple(root, true, 0, INT_MAX, INT_MIN);
    }

    auto l = bst(root->left);
    auto r = bst(root->right);

    if (!get<1>(l) || !get<1>(r)){
        return make_tuple(root, false, max(get<2>(l), get<2>(r)), root->val, root->val);
    }

    if (get<4>(l) >= root->val){
        return make_tuple(root, false, max(get<2>(l), get<2>(r)), root->val, root->val);
    }

    if (get<3>(r) <= root->val){
        return make_tuple(root, false, max(get<2>(l), get<2>(r)), root->val, root->val);
    }

    return make_tuple(root, true, get<2>(l) + get<2>(r) + 1, get<2>(l) > 0 ? get<3>(l) : root->val, get<2>(r) > 0 ? get<4>(r) : root->val);
};

int largestBSTSubtree(TreeNode* root) {
    auto s = bst(root);
    return get<2>(s);
}

int main(){
    TreeNode n10(10);
    TreeNode n5(5);
    TreeNode n1(1);
    TreeNode n8(8);
    TreeNode n15(15);
    TreeNode n7(7);

    //n5.left = &n1;
    //n5.right = &n8;
    //n15.right = &n7;
    //n10.left = &n5;
    n10.right = &n15;
    auto result = largestBSTSubtree(&n10);
    int x = 0;
}
