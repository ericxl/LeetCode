//
// Created by Eric Liang on 3/14/18.
//

#include <leetcode.h>

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    set<int> cand;
    for (int i = 0; i < nums.size(); i++) {
        if (i > k) cand.erase(nums[i-k-1]);
        if (!cand.insert(nums[i]).second) return true;
    }
    return false;
}

int main(){
    vector<int> v = {1,2,1};
    bool result = containsNearbyDuplicate(v, 0);
}
