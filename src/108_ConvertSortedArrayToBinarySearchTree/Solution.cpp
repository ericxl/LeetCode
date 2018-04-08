//
// Created by Eric Liang on 4/7/18.
//

TreeNode* helper(vector<int>& nums, int low, int high) {
    if (low > high) { // Done
        return nullptr;
    }
    int mid = (low + high) / 2;
    TreeNode* node = new TreeNode(nums[mid]);
    node->left = helper(nums, low, mid - 1);
    node->right = helper(nums, mid + 1, high);
    return node;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    if (nums.size() == 0) {
        return nullptr;
    }
    TreeNode* head = helper(nums, 0, nums.size() - 1);
    return head;
}

int main(){

}
