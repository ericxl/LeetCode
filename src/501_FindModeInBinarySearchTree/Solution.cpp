//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

int getModeCount(TreeNode* root, unordered_map<int, int> &map) {
    if(root == NULL)
        return 0;

    if(map.find(root->val) == map.end()) {
        map.insert(pair<int, int>(root->val, 1));
    }
    else {
        map[root->val]++;
    }

    return max(map[root->val], max(getModeCount(root->left, map), getModeCount(root->right, map)));
}

vector<int> findMode(TreeNode* root) {
    unordered_map<int, int> map;
    vector<int> result;
    int modeCount = getModeCount(root, map);

    for(pair<int,int> p : map) {
        if(p.second == modeCount) {
            result.push_back(p.first);
        }
    }

    return result;
}

int main(){

}
