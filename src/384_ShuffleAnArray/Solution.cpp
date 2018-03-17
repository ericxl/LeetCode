//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

class Solution {
public:
    vector<int> copy;
    Solution(vector<int> nums) {
        copy = nums;
    }

    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return copy;
    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> v(copy.size());
        for (int i = 0; i < copy.size(); ++i){
            v[i] = i;
        }

        int insertIndex = 0;
        vector<int> result(copy.size(), 0);
        while(!v.empty()){
            int ran = rand() % v.size();
            result[insertIndex] = copy[v[ran]];
            ++insertIndex;
            v.erase(v.begin() + ran);
        }
        return result;

    }
};

int main(){
    vector<int> nums = {1,2,3};
    Solution* obj = new Solution(nums);
    vector<int> param_1 = obj->reset();
    vector<int> param_2 = obj->shuffle();
}
