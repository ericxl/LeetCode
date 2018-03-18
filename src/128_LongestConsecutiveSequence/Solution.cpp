//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

int findRight (set<int>& s, int target){
    if (find(s.begin(), s.end(), target) != s.end()){
        s.erase(target);
        return findRight(s, target+1) + 1;
    }
    else {
        return 0;
    }
}

int findLeft (set<int>& s, int target){
    if (find(s.begin(), s.end(), target) != s.end()){
        s.erase(target);
        return findLeft(s, target-1) + 1;
    }
    else {
        return 0;
    }
}

int longestConsecutive(vector<int>& nums) {
    set<int>s;
    for (auto& num : nums){
        s.insert(num);
    }

    int result = 0;
    for (auto& num: s){
        int l = findLeft(s, num);
        int r = findRight(s, num + 1);
        result = max(result, l+r);
    }

    return result;
}

int main(){
    vector<int> nums = {100,4,200,1,3,2};
    longestConsecutive(nums);
}
