//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

int findRight (unordered_set<int>& s, int target){
    if (s.find(target) != s.end()){
        s.erase(target);
        return findRight(s, target+1) + 1;
    }
    else {
        return 0;
    }
}

int findLeft (unordered_set<int>& s, int target){
    if (s.find(target) != s.end()){
        s.erase(target);
        return findLeft(s, target-1) + 1;
    }
    else {
        return 0;
    }
}

int longestConsecutive(vector<int>& nums) {
    unordered_set<int>s;
    for (auto& num : nums){
        s.insert(num);
    }

    int result = 0;
    while (!s.empty()){
        int num = *s.begin();
        int l = findLeft(s, num);
        int r = findRight(s, num + 1);
        result = max(result, l+r);
    }

    return result;
}

int main(){
    vector<int> nums = {0,-1};
    longestConsecutive(nums);
}
