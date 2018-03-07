//
// Created by Eric Liang on 3/7/18.
//

#include <leetcode.h>

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;

    if (nums.size() < 3) return result;

    sort(nums.begin(), nums.end());

    set<int> uniqueKeys;
    map<int,int> map;
    set<int> uniqueComp;
    for(int nonZeroIdx = 0; nonZeroIdx < nums.size() - 1; ++nonZeroIdx) {
        if (nums[nonZeroIdx] > 0) break;
        if (uniqueKeys.find(nums[nonZeroIdx]) != uniqueKeys.end()) continue;
        uniqueKeys.insert(nums[nonZeroIdx]);

        map.clear();
        uniqueComp.clear();

        int target = -nums[nonZeroIdx];

        //perform 2 Sum
        for (int i = nonZeroIdx + 1; i < nums.size(); i++){
            int cur = nums[i];
            int curComp = target - cur;
            if (uniqueComp.find(curComp) != uniqueComp.end()) continue;
            if (map.find(curComp) != map.end()){
                // found previous
                result.push_back({nums[nonZeroIdx], nums[map[curComp]], cur});
                uniqueComp.insert(curComp);
            }
            map[cur] = i;
        }
    }
    return result;
}

int main(){
    vector<int> nums = {0,0,0,0};
    auto result = threeSum(nums);
}
