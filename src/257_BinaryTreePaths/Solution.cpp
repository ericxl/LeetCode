//
// Created by Eric Liang on 2/25/18.
//

#include <leetcode.h>

vector<string> binaryTreePaths(TreeNode *root) {
    vector<string> res;
    if (!root) return res;

    stack < TreeNode * > nodes;
    stack <string> strings;

    nodes.push(root);
    strings.push("");

    while (!nodes.empty()) {
        TreeNode *n = nodes.top();
        nodes.pop();
        string s = strings.top();
        strings.pop();

        s += s != "" ? "->" + to_string(n->val) : to_string(n->val);

        if (!n->left && !n->right) {
            res.push_back(s);
        } else {
            if (n->right) {
                nodes.push(n->right);
                strings.push(s);
            }

            if (n->left) {
                nodes.push(n->left);
                strings.push(s);
            }
        }
    }

    return res;
}

int main(){
}
