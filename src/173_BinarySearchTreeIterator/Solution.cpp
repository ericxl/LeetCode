//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

class BSTIterator {
public:
    stack<TreeNode*> st;
    BSTIterator(TreeNode *root) {
        TreeNode* r = root;
        while (r != nullptr) {
            st.push(r);
            r = r->left;
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !st.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* cur = st.top();
        st.pop();

        TreeNode* p = cur->right;
        while (p != nullptr){
            st.push(p);
            p=p->left;
        }
        return cur->val;
    }
};

int main(){

}
