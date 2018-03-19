//
// Created by Eric Liang on 3/18/18.
//

#include <leetcode.h>

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
    if (k < 1 || t < 0) return false;
    unordered_map<long, long> map;
    for (int i = 0; i < nums.size(); ++i) {
        long remappedNum = (long) nums[i] - INT_MIN;
        long bucket = remappedNum / ((long) t + 1);
        if (map.find(bucket) != map.end()
            || (map.find(bucket - 1) != map.end() && remappedNum - map[bucket - 1] <= t)
            || (map.find(bucket + 1)!= map.end() && map[bucket + 1] - remappedNum <= t))
            return true;
        if (map.size() >= k) {
            long lastBucket = ((long) nums[i - k] - INT_MIN) / ((long) t + 1);
            map.erase(lastBucket);
        }
        map[bucket] =remappedNum;
    }
    return false;
}

int main(){
    vector<int> nums = {2,1};
    bool result = containsNearbyAlmostDuplicate(nums,1,1);
}