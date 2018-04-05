//
// Created by Eric Liang on 4/5/18.
//

#include <leetcode.h>

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int>result;
    if (nums.size() == 0) return result;

    deque<int> deq;

    for (int i = 0; i < nums.size(); ++i){
        if (!deq.empty() && deq.front() == i - k){
            deq.pop_front();
        }

        while(!deq.empty() && nums[deq.back()] < nums[i]){
            deq.pop_back();
        }

        deq.push_back(i);
        if (i >= k - 1) result.push_back(nums[deq.front()]);
    }
    return result;
}

int main(){
    vector<int> num = {1,3,-1,-3,5,3,6,7};
    maxSlidingWindow(num, 3);
}
